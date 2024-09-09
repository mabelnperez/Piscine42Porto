#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_number(int n)
{
	ft_putchar(n / 10 + '0');
	ft_putchar(n % 10 + '0');
}
void	ft_print_comb2(void)
{
	int n1;
	int n2;

	n1 = 0;
	while (n1 <= 98)
	{
		n2 = n1 + 1;
		while (n2 <= 98)
		{
			ft_print_number(n1);
			ft_putchar(' ');
			ft_print_number(n2);
			if (!(n1 == 98 && n2 == 99))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}	n2++;
	}	n1++;
}
int 	main(void)
{
	ft_print_comb2();
	return (0);
}
