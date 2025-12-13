int	ft_str_is_alpha(char *str)
{
	int	i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (!(c >= 'a' && c <= 'z') && !(c >= 'A' && c <= 'Z'))
			return (0);
		++i;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_str_is_alpha("abkhgvhmg"));
	printf("%d\n", ft_str_is_alpha("hello, world!"));
	printf("%d\n", ft_str_is_alpha(""));
}*/
