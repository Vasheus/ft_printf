/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosabir <yosabir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 21:00:24 by yosabir           #+#    #+#             */
/*   Updated: 2024/01/07 12:10:48 by yosabir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	i;

	i = 0;
	if (n == -2147483648)
		i += ft_putstr("-2147483648");
	else if (n < 0)
	{
		i += ft_putchar('-');
		n = -n;
		i += ft_putnbr(n);
	}
	else if (n >= 10)
	{
		i += ft_putnbr(n / 10);
		i += ft_putchar(n % 10 + '0');
	}
	else if (n < 10)
	{
		i += ft_putchar(n % 10 + '0');
	}
	return (i);
}
