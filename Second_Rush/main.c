/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aotaryan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 17:12:09 by aotaryan          #+#    #+#             */
/*   Updated: 2025/11/29 19:04:28 by aotaryan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		solve(int grid[4][4], int *v);
void	print_grid(int grid[4][4]);

int	parse_args(char *str, int *v)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (str[i])
	{
		if (str[i] >= '1' && str[i] <= '4')
		{
			if (k == 16)
				return (0);
			v[k] = str[i] - '0';
			k++;
		}
		else if (str[i] != ' ')
			return (0);
		i++;
	}
	if (k != 16)
		return (0);
	return (1);
}

void	put_0_in_grid(int grid[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	views[16];
	int	grid[4][4];

	if (argc != 2 || parse_args(argv[1], views) == 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	put_0_in_grid(grid);
	if (!solve(grid, views))
		write(1, "Error\n", 6);
	else
		print_grid(grid);
	return (0);
}
