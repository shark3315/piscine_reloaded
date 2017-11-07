#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int main (void)
{
	int *ptr;
	int nb;

	ptr = &nb;
	nb = 3;
	printf("%d\n", nb);
	ft_ft(ptr);
	printf("%d\n", nb);	
	return (0);
}
