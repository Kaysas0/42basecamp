#include	<unistd.h>

void	ft_is_negative(int n)
{
	char	negative_flag;
	char	positive_flag;

	positive_flag = 'P';
	negative_flag = 'N';
	if (n >= 0)
	{
		write(1, &positive_flag, 1);
	}
	else
	{
		write(1, &negative_flag, 1);
	}
}
