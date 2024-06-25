/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadress.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosabir <yosabir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 00:51:37 by yosabir           #+#    #+#             */
/*   Updated: 2024/01/06 16:18:07 by yosabir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putlowlonghex(unsigned long nb)
{
	unsigned long	tmp;
	int				i;

	i = 0;
	tmp = nb;
	if (tmp >= 16)
	{
		i += ft_putlowlonghex(tmp / 16);
		if (tmp % 16 >= 10 && tmp % 16 <= 16)
			i += ft_putchar(tmp % 16 + 87);
		else
			i += ft_putchar(tmp % 16 + '0');
	}
	else if (tmp >= 0 && tmp < 10)
		i += ft_putchar(tmp + '0');
	else if (tmp >= 10 && tmp < 16)
		i += ft_putchar(tmp % 16 + 87);
	return (i);
}

int	ft_putadress(void *add)
{
	unsigned long	res;
	int				i;

	i = 0;
	res = (unsigned long)add;
	ft_putstr("0x");
	i += ft_putlowlonghex(res);
	return (i + 2);
}
