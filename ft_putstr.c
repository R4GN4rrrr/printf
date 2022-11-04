/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 11:30:44 by ymenyoub          #+#    #+#             */
/*   Updated: 2022/11/04 03:16:55 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	i;
	int	len;

	len = 0;
	i = 0;
	if (str == 0)
		len += ft_putstr("(null)");
	while (str && str[i] != '\0')
	{
		len += write(1, &str[i], 1);
		i++;
	}
	return (len);
}
