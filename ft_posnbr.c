/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_posnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 11:41:58 by ymenyoub          #+#    #+#             */
/*   Updated: 2022/11/04 03:12:07 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_posnbr(unsigned int nbr)
{
	int	len;

	len = 0;
	if (nbr >= 0 && nbr <= 9)
		len += ft_putchar(nbr + '0');
	else if (nbr > 9)
	{
		len += ft_posnbr(nbr / 10);
		len += ft_posnbr(nbr % 10);
	}
	return (len);
}
