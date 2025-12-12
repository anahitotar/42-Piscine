/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nagharib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 17:27:28 by nagharib          #+#    #+#             */
/*   Updated: 2025/11/23 17:40:08 by nagharib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	checking(int col, int row, int x, int y)
{
	if (row == 0 && col == 0)
		ft_putchar('A');
	else if (row == y - 1 && col == 0)
		ft_putchar('C');
	else if (row == 0 && col == x -1)
		ft_putchar('C');
	else if (row == y - 1 && col == x - 1)
		ft_putchar('A');
	else if ((row != 0 && col != 0) && (row < y - 1 && col < x - 1))
		ft_putchar(' ');
	else
		ft_putchar('B');
}

void	rush(int x, int y)
{
	int	col;
	int	row;

	col = 0;
	row = 0;
	while (row < y)
	{
		while (col < x)
		{
			checking(col, row, x, y);
			col ++;
		}
		row ++;
		col = 0;
		ft_putchar('\n');
	}
}
