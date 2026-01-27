/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aotaryan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 14:58:24 by aotaryan          #+#    #+#             */
/*   Updated: 2025/12/05 15:06:50 by aotaryan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*res;

	res = dest;
	while (*res != '\0')
	{
		++res;
	}
	while (*src != '\0' && nb > 0)
	{
		*res = *src;
		++res;
		++src;
		--nb;
	}
	*res = '\0';
	return (dest);
}
/*int main() {
    char dest[50] = "Hello, ";
    char src[] = "World!";

    printf("Before strcat: %s\n", dest);
    ft_strncat(dest, src, 3);
    printf("After strcat: %s\n", dest);

    return 0;
}*/
