#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	src_size;
	int	i;

	i = 0;
	src_size = 0;
	while (src[src_size] != '\0')
                ++src_size;

        if (size == 0)
                return (src_size);

	while ((i < size - 1) && src[i] != '\0')
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (src_size);
}/*
int	main()
{
	char dest[5];
	ft_strlcpy(dest, "HelloWorld", sizeof(dest));
	printf("dest = \"%s\"\n", dest);   // "Hell"
	printf("returned = %u\n", ft_strlcpy(dest, "HelloWorld", sizeof(dest))); // 10 
}*/
