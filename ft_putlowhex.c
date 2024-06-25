/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlowhex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosabir <yosabir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 00:22:25 by yosabir           #+#    #+#             */
/*   Updated: 2024/01/14 08:26:16 by yosabir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putlowhex(unsigned long nb)
{
	unsigned long	tmp;
	int				i;

	i = 0;
	tmp = nb;
	if (tmp >= 16)
	{
		i += ft_putlowhex(tmp / 16);
		if (tmp % 16 >= 10 && tmp % 16 <= 15)
			i += ft_putchar(tmp % 16 + 'a' - 10);
		else
			i += ft_putchar(tmp % 16 + '0');
	}
	else if (tmp >= 0 && tmp < 10)
	{
		i += ft_putchar(tmp + '0');
	}
	else if (tmp >= 10 && tmp < 16)
	{
		i += ft_putchar(tmp % 16 + 'a' - 10);
	}
	return (i);
}
