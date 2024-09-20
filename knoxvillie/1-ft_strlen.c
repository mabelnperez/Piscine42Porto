/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabnasci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 10:53:05 by mabnasci          #+#    #+#             */
/*   Updated: 2024/09/20 10:53:09 by mabnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return(i);
}

int main()
{
	char len[] = "Mabel";
	printf("%ld\n", ft_strlen(len));
	return (0);
}