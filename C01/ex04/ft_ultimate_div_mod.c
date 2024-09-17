/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabnasci <mabnasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 10:27:33 by mabnasci          #+#    #+#             */
/*   Updated: 2024/09/17 15:58:25 by mabnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = temp / *b;
	*b = temp % *b;
}
/*
int	main(void)
{
	int	x;
	int	y;

	x = 5;
	y = 10;
	printf("Before: x = %d, y = %d\n", x, y);
	ft_ultimate_div_mod(&x, &y);
	printf("After: x = %d, y = %d\n", x, y);
	return (0);
}*/
