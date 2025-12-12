/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aotaryan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 16:05:36 by aotaryan          #+#    #+#             */
/*   Updated: 2025/11/23 16:48:42 by aotaryan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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
			if ((row == 0 || row == y - 1) && (col == 0 || col == x - 1))
				ft_putchar('o');
			else if (row == 0 || row == y - 1)
				ft_putchar('-');
			else if (col == 0 || col == x - 1)
				ft_putchar('|');
			else
				ft_putchar(' ');
			++col;
		}
		col = 0;
		ft_putchar('\n');
		++row;
	}
}
