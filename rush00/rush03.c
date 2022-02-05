/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcerquei <mcerquei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 20:57:52 by mcerquei          #+#    #+#             */
/*   Updated: 2022/02/05 21:19:56 by mcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char letter);
void	check_char(int x, int y, int column, int row);

void	rush(int x, int y)
{
	int	row;
	int	column;

	row = 0;
	if (x <= 0 || y <= 0)
		return ;
	while (row < y)
	{
		column = 0;
		while (column < x)
		{
			if (row == 0 || row == y -1 || column == 0 || column == x -1)
				check_char(x, y, column, row);
			else
				ft_putchar(' ');
			column++;
		}
		row++;
		ft_putchar('\n');
	}
}

void	check_char(int x, int y, int column, int row)
{
	if ((row == 0 && column == 0) || (row == y -1 && column == 0))
		ft_putchar('A');
	else if ((row == 0 && column == x -1) || (row == y -1 && column == x -1))
		ft_putchar('C');
	else
		ft_putchar('B');
}
