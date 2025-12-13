char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		++i;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "Hello World!";
	printf("%s\n", ft_strupcase(str));
}*/
