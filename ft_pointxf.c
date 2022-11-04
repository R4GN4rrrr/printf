/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointxf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 05:23:33 by ymenyoub          #+#    #+#             */
/*   Updated: 2022/11/04 03:11:58 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointxf(unsigned long nb, int first)
{
	int		len;
	char	*ptr;

	len = 0;
	ptr = "0123456789abcdef";
	if (first == 1)
	{
		len += ft_putstr("0x");
	}
	if (nb >= 0 && nb < 16)
	{
		len += ft_putchar(ptr[nb]);
	}
	else if (nb >= 16)
	{
		len += ft_pointxf(nb / 16, 0);
		len += ft_pointxf(nb % 16, 0);
	}
	return (len);
}
