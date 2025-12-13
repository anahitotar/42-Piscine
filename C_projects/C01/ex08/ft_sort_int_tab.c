#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int i = 0, j = 0;
	while(j < size - 1)
	{
		while(i < size - 1)
		{
			if(tab[i] > tab[i + 1])
			{
				int temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			++i;
		}
		i = 0;
		++j;
	}
}
void putchar(char c)
{
	write(1, &c, 1);
}
void change(int a)
{
	if(a >= 10)
	{
		change(a / 10);
	}
		putchar(a % 10 + '0');
}
/*
int main()
{
	int size = 7;
	int arr[7] = {44, 5, 22, 8, 199, 9, 2};
	
	ft_sort_int_tab(arr, size);
	int i = 0;
	while(i < size)
	{
		change(arr[i]);
		putchar(' ');
		++i;
	}
}*/
