void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*
#include <stdio.h>
int main(void)
{
	int a = 10;
	int b = 20;

	printf("%d %d\n", a, b);
	
	ft_swap(&a, &b);

	printf("%d %d\n", a, b);

	return (0);
}
*/
