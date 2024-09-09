#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_number(int num)
{
	if (num > 9)
	{
		ft_putchar((num / 10) + '0'); // Imprime o primeiro dígito
	}
	ft_putchar((num % 10) + '0'); // Imprime o segundo dígito
}

void	ft_print_combn(int n)
{
	int i;
	int max;

	i = 0;
	max = 1;
	while (n--)
		max *= 10;
	while (i < max)
	{
		ft_print_number(i);
		if (i < max - 1)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		i++;
	}
}

int	main(void)
{
	ft_print_combn(2);
	return (0);
}
