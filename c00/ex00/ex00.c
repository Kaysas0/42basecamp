/*
write(1, &c, 1)
//escreve na saida padrão (terminal)
//o que esta no endereço de memória a partir de &c
//1 -> indica qtos bytes serão lidos a partir do &c
*/


#include <unistd.h>

void	ft_putchar(char c)
{	
	write(1, &x, 1);
}


int main(void) 
{
	ft_putchar('a');
	ft_putchar('\n');
	return(0);
}

