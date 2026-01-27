/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aotaryan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 15:06:52 by aotaryan          #+#    #+#             */
/*   Updated: 2025/12/08 15:09:47 by aotaryan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write (1, str, 1);
		++str;
	}
}
/*
int main(void)
{
	ft_putstr("Hello, World!\n");
	ft_putstr("");
	return (0);
}
*/
