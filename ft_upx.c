/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_upx.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 03:24:07 by ymenyoub          #+#    #+#             */
/*   Updated: 2022/11/04 03:12:23 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_upx(unsigned int nb)
{
	int		len;
	char	*ptr;

	len = 0;
	ptr = "0123456789ABCDEF";
	if (nb >= 0 && nb < 16)
		len += ft_putchar(ptr[nb]);
	else if (nb >= 16)
	{
		len += ft_upx(nb / 16);
		len += ft_upx(nb % 16);
	}
	return (len);
}
