/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   view.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aotaryan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 17:15:41 by aotaryan          #+#    #+#             */
/*   Updated: 2025/11/29 18:42:16 by aotaryan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	count_left(int row[4])
{
	int	seen;
	int	max;
	int	i;

	i = 0;
	max = 0;
	seen = 0;
	while (i < 4)
	{
		if (row[i] > max)
		{
			max = row[i];
			seen++;
		}
		i++;
	}
	return (seen);
}

int	count_right(int row[4])
{
	int	seen;
	int	max;
	int	i;

	i = 3;
	max = 0;
	seen = 0;
	while (i >= 0)
	{
		if (row[i] > max)
		{
			max = row[i];
			seen++;
		}
		i--;
	}
	return (seen);
}

int	count_up(int grid[4][4], int col)
{
	int	i;
	int	max;
	int	seen;

	i = 0;
	max = 0;
	seen = 0;
	while (i < 4)
	{
		if (grid[i][col] > max)
		{
			max = grid[i][col];
			seen++;
		}
		i++;
	}
	return (seen);
}

int	count_down(int grid[4][4], int col)
{
	int	i;
	int	max;
	int	seen;

	i = 3;
	max = 0;
	seen = 0;
	while (i >= 0)
	{
		if (grid[i][col] > max)
		{
			max = grid[i][col];
			seen++;
		}
		i--;
	}
	return (seen);
}
