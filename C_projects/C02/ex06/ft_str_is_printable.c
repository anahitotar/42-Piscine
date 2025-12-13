int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
			return (0);
		++i;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_str_is_printable("hello"));
	printf("%d\n", ft_str_is_printable("khkg \t"));
	printf("%d\n", ft_str_is_printable(""));
}*/
