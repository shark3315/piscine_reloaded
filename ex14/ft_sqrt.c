int		ft_sqrt(int nb)
{
	int n;
	int res;

	n = 1;
	res = 1;
	while (res < nb)
	{
		n++;
		res = n * n;
	}
	if (res == nb)
		return n;
	else
		return 0;
}

#include <stdio.h>

int main (void)
{
	printf("%d\n", ft_sqrt(0));
	return 0;
}
