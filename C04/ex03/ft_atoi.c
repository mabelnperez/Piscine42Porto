/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabnasci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 18:42:28 by mabnasci          #+#    #+#             */
/*   Updated: 2024/09/19 18:42:33 by mabnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdlib.h>
#include <stdio.h>

int ft_atoi(char *str)
{
	int	i;
	int signal;
	int result;

	i = 0;
	signal = 1;
	result = 0;

	while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	while(str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
		{
			signal = signal * (-1);
		}
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * signal);
}

int main()
{
	char	*str;
	str = " ---+--+1234ab567"; 

	printf("%d\n", ft_atoi(str));
}
