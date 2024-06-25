/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned_nbr.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosabir <yosabir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 00:21:29 by yosabir           #+#    #+#             */
/*   Updated: 2024/01/06 16:17:23 by yosabir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_u_nbr(unsigned int nb)
{
	int	i;

	i = 0;
	if (nb >= 0 && nb < 10)
		i += ft_putchar(nb + '0');
	else
	{
		i += ft_put_u_nbr(nb / 10);
		i += ft_putchar((nb % 10) + '0');
	}
	return (i);
}
