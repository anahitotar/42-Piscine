/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aotaryan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 15:13:38 by aotaryan          #+#    #+#             */
/*   Updated: 2025/11/22 18:01:56 by aotaryan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.h"

void	rush(int x, int y)
{
	int	row;

	int	col;

	row = 0;
        col = 0;
	if (x <= 0 || y <= 0)
		return ;
	while (row < y)
	{
		while (col < x)
		{
			if (row == 0 && col == 0) 
				ft_putchar('/');
			else if (row == 0 && col == x - 1)
                                ft_putchar('\\');	
			else if (row == y - 1 && col == 0)
			        ft_putchar('\\');
			else if (row == y - 1 && col == x - 1)
                                ft_putchar('/');
			else if (row == 0 || row == y - 1)
			        ft_putchar('*');
			else if	(col == 0 || col == x - 1 )
				ft_putchar('*');
			else
				ft_putchar(' ');
			++col;
		}
		col = 0;
		ft_putchar('\n');
		++row;
	}
}
