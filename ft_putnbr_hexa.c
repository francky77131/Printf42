/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgojard <frgojard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 12:20:56 by frgojard          #+#    #+#             */
/*   Updated: 2022/06/09 12:31:15 by frgojard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr_hexa(int nb, char *base)
{
	long int	nbr;
	int			i;

	i = 0;
	nbr = nb;
	if (nbr < 0)
	{
		nbr *= -1;
		i += ft_putchar('-');
	}
	if (nbr < 16)
	{
		i += ft_putchar(base[nbr]);
	}
	if (nbr >= 16)
	{
		i += ft_putnbr_hexa(nbr / 16, base);
		i += ft_putnbr_hexa(nbr % 16, base);
	}
	return (i);
}