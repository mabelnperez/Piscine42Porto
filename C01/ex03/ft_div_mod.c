#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int main(void);
{
    int dividendo = 10, divisor = 3;
    int quociente, resto;

    ft_div_mod(dividendo, divisor, &quociente, &resto);

    printf("Quociente: %d\n", quociente);
    printf("Resto: %d\n", resto);
    return(0);
}