/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aotaryan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 14:49:57 by aotaryan          #+#    #+#             */
/*   Updated: 2025/12/05 14:55:23 by aotaryan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
char	*ft_strcat(char *dest, char *src)
{
	char	*res;

	res = dest;
	while (*res != '\0')
		++res;
	while (*src != '\0')
	{
		*res = *src;
		++res;
		++src;
	}
	*res = '\0';
	return (dest);
}
/*int main() {
    char dest[50] = "Hello, ";
    char src[] = "World!";

    printf("Before strcat: %s\n", dest);
    ft_strcat(dest, src);
    printf("After strcat: %s\n", dest);

    return 0;
}*/
