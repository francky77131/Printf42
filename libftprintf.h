/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgojard <frgojard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 14:14:43 by frgojard          #+#    #+#             */
/*   Updated: 2022/06/13 17:40:19 by frgojard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <ctype.h>
# include <string.h>
# include <stddef.h>
# include <stdarg.h>
# include <limits.h>

int	ft_printf(const char *s, ...);
int	ft_putchar(char c);
int	ft_putstr(const char *str);
int	ft_putnbr(int nb);
int	ft_putnbr_hexa(size_t nbr, char *base);
int	ft_putnbr_u(unsigned int nb);
int	ft_putnbr_p(va_list args, char *base);

#endif