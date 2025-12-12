/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aotaryan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 16:10:24 by aotaryan          #+#    #+#             */
/*   Updated: 2025/11/23 16:20:58 by aotaryan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	check(int x, int y, int row, int col)
{
	if ((row == 0 && col == 0) || (row == 0 && col == x - 1))
		ft_putchar('A');
	else if ((row == y - 1 && col == 0) || (row == y - 1 && col == x - 1))
		ft_putchar('C');
	else if (row == 0 || row == y - 1)
		ft_putchar('B');
	else if (col == 0 || col == x - 1)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	row;
	int	col;

	row = 0;
	col = 0;
	while (row < y)
	{
		while (col < x)
		{
			check(x, y, row, col);
			++col;
		}
		col = 0;
		ft_putchar('\n');
		++row;
	}
}
