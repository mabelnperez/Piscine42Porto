#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int i = 0;
	while(str[i])
	{
		if(((str[i] >= 'a') && (str[i] <= 'z')))
		i++;
		else return (0);
	}
	return (1);
}
/*
int    main(void)
{
    int is_lowercase;
    char a[] = "abc";
    is_lowercase = ft_str_is_lowercase(a);
    printf("%d\n", is_lowercase);
}
*/