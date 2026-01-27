/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aotaryan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 15:08:26 by aotaryan          #+#    #+#             */
/*   Updated: 2025/12/05 15:21:26 by aotaryan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*src;
	char	*p;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		src = to_find;
		p = str;
		while (*p == *src && *src != '\0')
		{
			++src;
			++p;
		}
		if (*src == '\0')
			return (str);
		++str;
	}
	return (0);
}
/*int main(void)
{
    char *text = "Hello world";
    char *res = ft_strstr(text, "world");

    if (res)
        printf("Found: %s\n", res);
    else
        printf("Not found\n");

    return 0;
}*/
