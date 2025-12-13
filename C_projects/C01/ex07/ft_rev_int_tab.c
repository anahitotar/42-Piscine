void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		++i;
	}
}
/*
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;

    ft_rev_int_tab(arr, size);

    for (int i = 0; i < size; ++i)
        printf("%d ", arr[i]);
    return 0;
}*/
