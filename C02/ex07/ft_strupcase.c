#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32; //  C -= A is equivalent to C = C - A.
	}
	return(str);
}
/*int	main()
{
	char a[] = "bksjnbhjdckjl";

	printf("%s\n", ft_strupcase(a));
	return (0);
}
*/