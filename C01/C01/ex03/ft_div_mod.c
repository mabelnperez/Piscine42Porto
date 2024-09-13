/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabnasci <mabnasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 09:53:23 by mabnasci          #+#    #+#             */
/*   Updated: 2024/09/13 10:17:15 by mabnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main(void)
{
	int	div;
	int	mod;

	ft_div_mod(10, 3, &div, &mod);
	printf("Div: %d, Mod: %d\n", div, mod);
	return (0);
}

