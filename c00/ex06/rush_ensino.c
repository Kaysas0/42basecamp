#include <stdio.h>

int	soma(int numero1, int numero2)
{
	//codigo
	int resultado;
	
	resultado = numero1 + numero2;

	printf("%d\n", resultado);

	return (resultado);
}

int main()
{
	soma(4, 6);
	soma(2, 2);
}