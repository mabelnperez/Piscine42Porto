/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabnasci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:48:06 by mabnasci          #+#    #+#             */
/*   Updated: 2024/09/17 15:49:22 by mabnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	i = 0;
	while (str[i])
	{
		if (((str[i] >= 32) && (str[i] <= 126)))
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	int print;
	char a[] = "\n";
	print = ft_str_is_printable;
	printf("%d\n", print);
}
*/
