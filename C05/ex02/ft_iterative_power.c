#include <stdio.h>
#include <string.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return(0);
	else if(power == 0)
		return(1);
	while (power > 1)
	{
		result = result * nb;
		power--; 
	}
	return (result);
}
/*
int	main()
{
	printf("%i\n", ft_iterative_power(-2, 2));
}*/