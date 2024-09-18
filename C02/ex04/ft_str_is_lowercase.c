/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabnasci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:43:00 by mabnasci          #+#    #+#             */
/*   Updated: 2024/09/17 15:44:57 by mabnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	i = 0;
	while (str[i])
	{
		if (((str[i] >= 'a') && (str[i] <= 'z')))
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int    main(void)
{
    int is_lowercase;
    char a[] = "abc";
    is_lowercase = ft_str_is_lowercase(a);
    printf("%d\n", is_lowercase);
}
*/
