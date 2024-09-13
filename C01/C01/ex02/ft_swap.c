/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabnasci <mabnasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 18:51:17 by mabnasci          #+#    #+#             */
/*   Updated: 2024/09/12 17:35:10 by mabnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
int	main(void)
{
	int	x;
	int	y;

	x = 5;
	y = 10;
    printf("Antes: x = %d, y = %d\n", x, y);
    ft_swap(&x, &y);
    printf("Depois: x = %d, y = %d\n", x, y);
	return (0);
}
