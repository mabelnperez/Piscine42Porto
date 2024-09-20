#include <unistd.h>

int	main(int argv, char **argc)
{
	(void)argc;
	(void)argv;
	write(1, "z\n", 2);
	return(0);
}