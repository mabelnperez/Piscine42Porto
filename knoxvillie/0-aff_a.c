/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabnasci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 10:51:36 by mabnasci          #+#    #+#             */
/*   Updated: 2024/09/20 10:51:37 by mabnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while(argv[1][i] != '\0')
		{
			if (argv[1][i] = 'a')
			{
				write (1, "a", 1);
				break;
			}
			i++;
		}
		write(1, "\n", 1);
	}
	else
	{
		write(1, "a\n", 2);
	}
	return(0);
}

