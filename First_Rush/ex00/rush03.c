/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nagharib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 17:15:13 by nagharib          #+#    #+#             */
/*   Updated: 2025/11/23 17:26:30 by nagharib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	checks(int col, int row, int x, int y)
{
	if ((row == 0 && col == 0) || (row == y - 1 && col == 0))
	{
		ft_putchar('A');
	}
	else if ((row == 0 && col == x - 1) || (row == y - 1 && col == x - 1))
	{
		ft_putchar('C');
	}
	else if ((row != 0 && col != 0) && (col < x - 1 && row < y - 1))
	{
		ft_putchar(' ');
	}
	else
	{
		ft_putchar('B');
	}
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
			checks(col, row, x, y);
			col++;
		}
		row++;
		col = 0;
		ft_putchar('\n');
	}
}
