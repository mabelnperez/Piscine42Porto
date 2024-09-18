/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabnasci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:45:26 by mabnasci          #+#    #+#             */
/*   Updated: 2024/09/17 15:46:54 by mabnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	i = 0;
	while (str[i])
	{
		if (((str[i] >= 'A') && (str[i] <= 'Z')))
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	int	is_uppercase;
	char a[] = "CHUVA DE MEC";
	ft_str_is_uppercase;
	printf("%d\n", is_uppercase);
}
*/
