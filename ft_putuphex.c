/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuphex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosabir <yosabir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 22:42:48 by yosabir           #+#    #+#             */
/*   Updated: 2024/01/07 12:10:21 by yosabir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putuphex(unsigned long nb)
{
	unsigned long	tmp;
	int				i;

	i = 0;
	tmp = nb;
	if (tmp >= 16)
	{
		i += ft_putuphex(tmp / 16);
		if (tmp % 16 >= 10 && tmp % 16 <= 16)
			i += ft_putchar(tmp % 16 + 55);
		else
			i += ft_putchar(tmp % 16 + '0');
	}
	else if (tmp >= 0 && tmp < 10)
		i += ft_putchar(tmp + '0');
	else if (tmp >= 10 && tmp < 16)
		i += ft_putchar(tmp % 16 + 55);
	return (i);
}
