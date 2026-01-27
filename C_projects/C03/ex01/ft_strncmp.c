/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aotaryan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 14:42:03 by aotaryan          #+#    #+#             */
/*   Updated: 2025/12/05 14:48:44 by aotaryan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (n == 0)
		return (0);
	while (n > 0 && *s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		++s1;
		++s2;
		--n;
	}
	if (n > 0)
		return (*s1 - *s2);
	return (0);
}
/*int main()
{
	char a[] = "ABCD";
	char b[] = "ABCV";
	printf("%d", ft_strncmp(a, b, 3));
}*/
