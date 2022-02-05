/*

	Because of ASCII, a char is also an int 

*/

#include <unistd.h>
#include <stdio.h>

void	ft_print_alphabet(void)
{
	int letter = 'a';
	
	while(letter <= 'z') {
		write(1, &letter, 1);
		letter++;
	}
}

int main() {
	
	ft_print_alphabet();
	printf("\n");
	return 0;
}