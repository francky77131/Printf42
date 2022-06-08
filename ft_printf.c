/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgojard <frgojard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 11:38:10 by frgojard          #+#    #+#             */
/*   Updated: 2022/06/08 17:08:24 by frgojard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_check_arg(char c, va_list args, int size)
{
	if (c == 'c')
		size += ft_putchar(va_arg(args, int));
	if (c == 's')
		size += ft_putstr(va_arg(args, char *));
	return (size);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int	i;
	int size;

	i = 0;
	size = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] != '%')
			size += ft_putchar(s[i]);
		else
		{
			size += ft_check_arg(s[i + 1], args, 0);
			i++;
		}
		i++;
	}

	va_end(args);
	return (size);
}
