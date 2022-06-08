/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgojard <frgojard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 14:14:49 by frgojard          #+#    #+#             */
/*   Updated: 2022/06/08 17:07:47 by frgojard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	main(void)
{
	int size;

	size = ft_printf("Test c : %c\nTest s : %s\n", 'A', "ca va ?\n");
	printf("\nTaille printf %d\n", size);
	return (0);
}