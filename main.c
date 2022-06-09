/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgojard <frgojard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 14:14:49 by frgojard          #+#    #+#             */
/*   Updated: 2022/06/09 12:53:54 by frgojard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <limits.h>

int	main(void)
{
	int size;
	char *str = "salut ca va !";

	size = ft_printf("Test p : %d\nTest X : %X\nTest x : %x\nTest pourcentage : %%\nTest i : %i\nTest d : %d\nTest c : %c\nTest s : %s\n", *str, 42, 42, INT_MIN, INT_MIN, 'A', "ca va ?\n");
	printf("\nTaille printf %d\n", size);
	return (0);
}