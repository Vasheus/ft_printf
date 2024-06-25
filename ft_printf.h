/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosabir <yosabir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 00:56:10 by yosabir           #+#    #+#             */
/*   Updated: 2024/01/14 08:25:40 by yosabir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putnbr(int n);
int	ft_put_u_nbr(unsigned int nb);
int	ft_putlowhex(unsigned long nb);
int	ft_putuphex(unsigned long nb);
int	ft_strlen(const char *s);
int	ft_putadress(void *add);
int	ft_printf(const char *format, ...);

#endif
