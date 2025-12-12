#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    print_arr(int *arr, int n)
{
    int i = 0;

    while (i < n)
    {
        ft_putchar(arr[i] + '0');
        i++;
    }
    if (arr[0] != 10 - n) 
        write(1, ", ", 2);
}

void    ft_print_combn(int n)
{
    int arr[10];
    int i;

    if (n <= 0 || n >= 10)
        return;

    // 0,1,2,...,n-1
    i = 0;
    while (i < n)
    {
        arr[i] = i;
        i++;
    }
    while (1)
    {
        print_arr(arr, n);
        i = n - 1;
        while (i >= 0 && arr[i] == 9 - (n - 1 - i))
            --i;
        if (i < 0)
            break;
        arr[i]++;
        while (++i < n)
            arr[i] = arr[i - 1] + 1;
    }
}
/*
int main()
{
	ft_print_combn(3);
}*/
