/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosabir <yosabir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 20:20:00 by yosabir           #+#    #+#             */
/*   Updated: 2024/01/14 08:19:26 by yosabir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_format(char specifier, va_list ap)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += ft_putchar(va_arg(ap, int));
	else if (specifier == 's')
		count += ft_putstr(va_arg(ap, char *));
	else if (specifier == 'p')
		count += ft_putadress(va_arg(ap, void *));
	else if (specifier == 'd' || specifier == 'i')
		count += ft_putnbr(va_arg(ap, int));
	else if (specifier == 'u')
		count += ft_put_u_nbr(va_arg(ap, unsigned int));
	else if (specifier == 'x')
		count += ft_putlowhex(va_arg(ap, unsigned int));
	else if (specifier == 'X')
		count += ft_putuphex(va_arg(ap, unsigned int));
	else if (specifier == '%')
		count += ft_putchar('%');
	else
		count += ft_putchar(specifier);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	int	count;

	count = 0;
	if ((write(1, "", 0)) == -1)
		return (-1);
	va_list(ap);
	va_start(ap, format);
	while (*format)
	{
		if (*format == '%')
		{
			if (*(++format) == '\0')
				break ;
			count += print_format(*(format), ap);
		}
		else
			count += ft_putchar(*format);
		format++;
	}
	va_end(ap);
	return (count);
}
