/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgojard <frgojard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 15:27:10 by frgojard          #+#    #+#             */
/*   Updated: 2022/06/13 17:37:22 by frgojard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putstr(const char *str)
{
	int	i;

	i = -1;
	if (!str)
		str = "(null)";
	while (str[++i])
		ft_putchar(str[i]);
	return (i);
}
