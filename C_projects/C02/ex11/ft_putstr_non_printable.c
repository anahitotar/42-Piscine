#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	char	*hex;
	char	c;

	hex = "0123456789abcdef";
	while (*str)
	{
		c = *str;
		if (c >= 32 && c <= 126)
			write (1, &c, 1);
		else
		{
			write (1, "\\", 1);
			write (1, &hex[c / 16], 1);
			write (1, &hex[c % 16], 1);
		}
		++str;
	}
}
/*
int main() 
{
    char str[] = "Coucou\ntu vas bien ?";
    ft_putstr_non_printable(str);
}*/
