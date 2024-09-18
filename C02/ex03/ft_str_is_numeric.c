/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 08:38:50 by marvin            #+#    #+#             */
/*   Updated: 2024/09/17 15:42:34 by mabnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	i = 0;
	while (str[i])
	{
		if (((str[i] >= '0') && (str[i] <= '9')))
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int    main(void)
{
    int is_numeric;
    char a[] = "abc";
    is_numeric = ft_str_is_numeric(a);
    printf("%d\n", is_numeric);
}
*/
