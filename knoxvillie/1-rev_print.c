/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1-rev_print.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabnasci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 13:45:11 by mabnasci          #+#    #+#             */
/*   Updated: 2024/09/20 13:45:12 by mabnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return(i);
}

char *ft_rev_print (char *str)
{
	int	i;

	i = ft_strlen(str);
	i--;
	while(i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
	write(1, "\n", 1);
	return(str);
}

int	main(int argc, char **argv)
{
	if(argc == 2)
	{
		ft_rev_print(argv[1]);
	}	
	return(0);
}
