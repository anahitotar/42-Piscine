void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = temp / (*b);
	*b = temp % (*b);
}
/*
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int main()
{
	int a = 20, b = 3;
	printf("a: %d , b: %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("Div: %d , Mod: %d\n", a, b);
}*/
