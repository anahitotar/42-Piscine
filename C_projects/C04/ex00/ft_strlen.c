/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aotaryan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 15:02:04 by aotaryan          #+#    #+#             */
/*   Updated: 2025/12/08 15:06:15 by aotaryan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		++count;
	return (count);
}
/*
int main(void)
{
 char str1[] = "Hello, World!";
 char str2[] = ""; 

 printf("Length of '%s': %d\n", str1, ft_strlen(str1));
 printf("Length of '%s': %d\n", str2, ft_strlen(str2));
}
*/
