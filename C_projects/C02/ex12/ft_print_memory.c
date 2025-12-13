#include <unistd.h>
#include <stdio.h>

void print_hex_addr(unsigned long addr)
{
	char hex[16] = "0123456789abcdef";
	char buf[16];
	int i;

	i = 0;
	while (i < 16)
	{
		buf[15 - i] = hex[addr % 16];
		addr /= 16;
		i++;
	}
	write(1, buf, 16);
}

void print_hex_content(unsigned char *ptr, unsigned int size)
{
	char hex[16] = "0123456789abcdef";
	unsigned int i;

	i = 0;
	while (i < 16)
	{
		if (i < size)
		{
			write(1, &hex[ptr[i] / 16], 1);
			write(1, &hex[ptr[i] % 16], 1);
		}
		else
		{
			write(1, "  ", 2);
		}
		if (i % 2 == 1)
			write(1, " ", 1);
		i++;
	}
}

void print_chars(unsigned char *ptr, unsigned int size)
{
	unsigned int i;
	char c;

	i = 0;
	while (i < size)
	{
		c = ptr[i];
		if (c >= 32 && c <= 126)
			write(1, &c, 1);
		else
			write(1, ".", 1);
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int i;
	unsigned int block_size;
	unsigned char *ptr;

	if (size == 0)
		return (addr);
	i = 0;
	ptr = (unsigned char *)addr;
	while (i < size)
	{
		block_size = (size - i >= 16) ? 16 : (size - i);
		print_hex_addr((unsigned long)(ptr + i));
		write(1, ": ", 2);
		print_hex_content(ptr + i, block_size);
		print_chars(ptr + i, block_size);
		write(1, "\n", 1);
		i += 16;
	}
	return (addr);
}
/*
int main()
{
        char str[] = "Bonjour les aminches\t\n\tc\a est fou\ttout\tce qu on peut faire avec\t\n\tprint_memory\n\n\n\tlol.lol\n \0";
        int i = 0;
        while(str[i] != '\0')
                ++i;
        ft_print_memory(str, i);
}*/
