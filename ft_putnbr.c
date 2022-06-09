/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgojard <frgojard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 10:31:11 by frgojard          #+#    #+#             */
/*   Updated: 2022/06/09 10:55:43 by frgojard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr(int nb)
{
	long int	nbr;
	int			i;

	i = 0;
	nbr = nb;
	if (nbr < 0)
	{
		nbr *= -1;
		ft_putchar('-');
		i++;
	}
	if (nbr >= 10)
	{
		i += ft_putnbr(nbr / 10);
		i += ft_putnbr(nbr % 10);
	}
	if (nbr < 10)
	{
		nbr += '0';
		i += ft_putchar(nbr);
	}
	return (i);
}