void	ft_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;

}

#include <stdio.h>

int main(void)
{
	int *ptr1;
	int *ptr2;
	int a;
	int b;

	ptr1 = &a;
	ptr2 = &b;
	a = 4;
	b = 2;
	printf("%d%d\n", a,b);
	ft_swap(ptr1, ptr2);
	printf("%d%d\n", a,b);
	return (0);
}
