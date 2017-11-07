void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int *div;
	int *mod;

	a = 4;
	b = 2;
	div = &a;
	mod = &b;
	printf("%d %d\n", a, b);
	ft_div_mod(a,b,div,mod);
	printf("%d %d\n", a, b);
	return(0);
}
