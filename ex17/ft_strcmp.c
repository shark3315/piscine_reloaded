int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] < s2[i])
			return -1;
		if (s1[i] > s2[i])
			return 1;
		i++;
	}
	return 0;
}

#include <stdio.h>
#include <string.h>

int main (void)
{
	printf("%d\n", ft_strcmp("a", "b"));
	printf("%d\n", strcmp("a", "b"));
	return 0;
}

