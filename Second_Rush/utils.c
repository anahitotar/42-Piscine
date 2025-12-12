/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aotaryan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 17:14:41 by aotaryan          #+#    #+#             */
/*   Updated: 2025/11/29 19:00:51 by aotaryan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int n)
{
	char	c;

	c = n + '0';
	write(1, &c, 1);
}

int	is_in_row(int grid[4][4], int row, int val)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (grid[row][i] == val)
			return (1);
		i++;
	}
	return (0);
}

int	is_in_col(int grid[4][4], int col, int val)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (grid[i][col] == val)
			return (1);
		i++;
	}
	return (0);
}
