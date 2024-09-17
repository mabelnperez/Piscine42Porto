#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int i = 0;
	while(str[i])
	{
		if(((str[i] >= 32) && (str[i] <= 126)))
		i++;
		else return (0);
	}
	return (1);
}
int	main(void)
{
	int print;
	char a[] = "\n";
	print = ft_str_is_printable;
	printf("%d\n", print);
}