#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
		return (0);
	}
	if (nb >= 10)
	{
		ft_putchar(nb / 10);
	}
	ft_putchar(nb % 10 + '0');
}

int	main(void)
{
	ft_putchar(42);
	ft_putchar('\n');
	ft_putnbr(-2147483648);
	ft_putchar('\n');
	ft_putnbr(2147483647);
	ft_putchar('\n');
	return (0);
}

