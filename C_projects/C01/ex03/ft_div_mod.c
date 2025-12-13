void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int main()
{
	int a = 20, b = 3, div = 0, mod = 0;
	ft_div_mod(a, b, &div, &mod);
	printf("Div: %d , Mod: %d\n", div, mod);
}*/
