/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lowx.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 04:47:02 by ymenyoub          #+#    #+#             */
/*   Updated: 2022/11/04 03:12:02 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_lowx(unsigned int nb)
{
	int		len;
	char	*ptr;

	ptr = "0123456789abcdef";
	len = 0;
	if (nb >= 0 && nb < 16)
		len += ft_putchar(ptr[nb]);
	else if (nb >= 16)
	{
		len += ft_lowx(nb / 16);
		len += ft_lowx(nb % 16);
	}
	return (len);
}
