#include <stdio.h>

int ft_iterative_factorial(int nb)
{
	int	i;
	int	f;

	i = 0;
	f = nb;
	if (nb == 0)
	{
		return(1);
	}
	if (nb < 0)
	{
		return(0);
	}
	while (f > 0)
	{
		nb = nb * (f-1);
		i++;
		f--;
		return(nb);
	}
}
/*
int	main()
{
	int re = ft_iterative_factorial(20);
	printf("%d\n", re);
}*/
