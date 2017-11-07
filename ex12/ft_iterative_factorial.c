int		ft_iterative_factorial(int nb)
{
	int cmpt;
	int res;

	cmpt = 1;
	res = 1;
	if (nb > 0 && nb <= 12)
	{
		while (cmpt <= nb)
		{
			res *= cmpt;
			cmpt++;
		}
		return res;
	}
	else
		return 0;
}

#include <stdio.h>

int main(void)
{
	printf("%d\n", ft_iterative_factorial(6));
	return 0;
}
