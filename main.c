/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgojard <frgojard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 14:14:49 by frgojard          #+#    #+#             */
/*   Updated: 2022/06/13 15:54:53 by frgojard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <limits.h>

int	main(void)
{
	int size;
	char *str = "salut ca va !";

	size = ft_printf("Test p : %p\nTest u : %u\nTest p : %d\nTest X : %X\nTest x : %x\nTest pourcentage : %%\nTest i : %i\nTest d : %d\nTest c : %c\nTest s : %s\n", &str, -120, *str, LONG_MAX, -15, INT_MIN, INT_MIN, 'A', "ca va ?\n");
	printf("--------------vrai printf-----------------\n");
	printf("Test p : %p\nTest u : %u\nTest p : %d\nTest X : %lX\nTest x : %x\nTest pourcentage : %%\nTest i : %i\nTest d : %d\nTest c : %c\nTest s : %s\n", &str, -120, *str, LONG_MAX, -15, INT_MIN, INT_MIN, 'A', "ca va ?\n");
	printf("\nTaille printf %d\n", size);
	return (0);
}