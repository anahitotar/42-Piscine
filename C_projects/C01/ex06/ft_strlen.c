int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		++count;
	return (count);
}
/*
#include <stdio.h>
int main()
{
	int length = ft_strlen("Hello, world!");
	printf("Length: %d\n", length); //Length: 13
	return 0;
}*/
