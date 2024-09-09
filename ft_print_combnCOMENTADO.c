#include <unistd.h>

// Função auxiliar para imprimir um único caractere
void	ft_putchar(char c)
{
	// A função write é usada para imprimir um caractere.
	// O número 1 significa a saída padrão (console).
	write(1, &c, 1);
}

// Função para imprimir um número com dois dígitos
void	ft_print_number(int num)
{
	// Se o número for maior que 9, significa que tem duas casas decimais.
	// Primeiro, imprime o dígito das dezenas.
	if (num > 9)
	{
		// Divide o número por 10 para pegar o dígito das dezenas
		// e converte para caractere adicionando '0' ao valor numérico.
		ft_putchar((num / 10) + '0');
	}
	// Em seguida, imprime o dígito das unidades.
	// Usa o operador '%' para pegar o dígito da unidade.
	ft_putchar((num % 10) + '0');
}

// Função principal que imprime todas as combinações de n dígitos
void	ft_print_combn(int n)
{
	int i;
	int max;

	i = 0;
	max = 1;
	// Calcula o valor máximo com base no número de dígitos n.
	// Por exemplo, se n = 2, max será 100, pois estamos lidando com combinações de 00 a 99.
	while (n--)
		max *= 10;

	// Loop que vai de 0 até o valor máximo para imprimir todos os números.
	while (i < max)
	{
		// Imprime o número atual usando a função ft_print_number.
		ft_print_number(i);
		
		// Se ainda não chegamos ao último número, imprime ", " para separar os números.
		if (i < max - 1)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		// Incrementa o número.
		i++;
	}
}

int	main(void)
{
	// Chama a função ft_print_combn com n = 2 para imprimir combinações de dois dígitos.
	ft_print_combn(2);
	return (0);
}
