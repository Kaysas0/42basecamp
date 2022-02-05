#include	<unistd.h>

void	ft_print_comb(void);

void	ft_print_comb(void)
{
	char	numbers[3];

	numbers[0] = '0';
	numbers[1] = '1';
	numbers[2] = '2';
	while (numbers[0] <= '7')
	{
		while (numbers[1] <= '8')
		{	
			while (numbers[2] <= '9')
			{
				write(1, &numbers[0], 1);
				write(1, &numbers[1], 1);
				write(1, &numbers[2], 1);
				numbers[2]++;
				if (numbers[0] < '7') //nao printa a ',' depois do 789
					write(1, ", ", 2);
			}
			numbers[1]++; //incrementa o segundo valor
			numbers[2] = numbers[1] + 1; //reseta o terceiro algarismo garantindo que ele sempre seja maior que o segundo algarismo
		}
		numbers[0]++; //incrememta o primeiro algarismo
		numbers[1] = numbers[0] + 1; //reseta o segundo algarismo garantindo que ele seja maior que o primeiro algarismo
		numbers[2] = numbers[1] + 1; //reseta o terceiro algarismo garantindo que ele seja maior que o segundo algarismo 
	}
}
