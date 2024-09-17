/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 08:12:28 by marvin            #+#    #+#             */
/*   Updated: 2024/09/17 08:12:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int i = 0;
	while(str[i])
	{
		if(((str[i] >= 'a') && (str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')))
		i++;
		else return (0);
	}
	return (1);
}
/*
int    main(void)
{
    int is_alpha;
    char a[] = " ";
    is_alpha = ft_str_is_alpha(a);
    printf("%d\n", is_alpha);
}
*/