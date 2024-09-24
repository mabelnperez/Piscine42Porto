/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabnasci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 20:40:04 by mabnasci          #+#    #+#             */
/*   Updated: 2024/09/24 20:41:00 by mabnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (nb == 1 || power < 1 || power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power -1));
}

int	main(void)
{
	printf("%i\n", ft_recursive_power(5, 6));
}
