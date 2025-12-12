/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aotaryan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 17:13:02 by aotaryan          #+#    #+#             */
/*   Updated: 2025/11/29 19:10:51 by aotaryan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_in_row(int grid[4][4], int row, int val);
int	is_in_col(int grid[4][4], int col, int val);
int	count_left(int row[4]);
int	count_right(int row[4]);
int	count_up(int grid[4][4], int col);
int	count_down(int grid[4][4], int col);

int	check_row(int grid[4][4], int *v, int r)
{
	if (count_left(grid[r]) != v[8 + r])
		return (0);
	if (count_right(grid[r]) != v[12 + r])
		return (0);
	return (1);
}

int	check_col(int grid[4][4], int *v, int c)
{
	if (count_up(grid, c) != v[c])
		return (0);
	if (count_down(grid, c) != v[4 + c])
		return (0);
	return (1);
}

void	next_cell(int *row, int *col, int pos)
{
	*row = pos / 4;
	*col = pos % 4;
}

int	solve_cell(int grid[4][4], int *v, int pos)
{
	int	row;
	int	col;
	int	n;

	if (pos == 16)
		return (1);
	next_cell(&row, &col, pos);
	n = 1;
	while (n <= 4)
	{
		if (!is_in_row(grid, row, n) && !is_in_col(grid, col, n))
		{
			grid[row][col] = n;
			if (col == 3 && !check_row(grid, v, row))
				grid[row][col] = 0;
			else if (row == 3 && !check_col(grid, v, col))
				grid[row][col] = 0;
			else if (solve_cell(grid, v, pos + 1))
				return (1);
			else
				grid[row][col] = 0;
		}
		n++;
	}
	return (0);
}

int	solve(int grid[4][4], int *v)
{
	return (solve_cell(grid, v, 0));
}
