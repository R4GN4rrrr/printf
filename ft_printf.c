/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 22:00:21 by ymenyoub          #+#    #+#             */
/*   Updated: 2022/11/04 03:04:50 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

void	ft_check(char s, va_list arg, int *len)
{
	if (s && s == 'c')
		*len = *len + ft_putchar(va_arg(arg, int));
	else if (s && s == 's')
		*len = *len + ft_putstr(va_arg(arg, char *));
	else if (s && s == 'p')
		*len = *len + ft_pointxf((unsigned long) va_arg(arg, void *), 1);
	else if (s && (s == 'd' || s == 'i'))
		*len = *len + ft_putnbr(va_arg(arg, int));
	else if (s && s == 'u')
		*len = *len + ft_posnbr(va_arg(arg, unsigned int));
	else if (s && s == 'x')
		*len = *len + ft_lowx(va_arg(arg, unsigned int));
	else if (s && s == 'X')
		*len = *len + ft_upx(va_arg(arg, unsigned int));
	else if (s && s == '%')
		*len = *len + ft_putchar('%');
}

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(arg, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			ft_check(str[i], arg, &len);
		}
		else
		{
			ft_putchar(str[i]);
			len++;
		}
		i++;
	}
	va_end (arg);
	return (len);
}
