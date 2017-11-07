int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return i;
}

#include <stdio.h>
#include <string.h>

int main(void)
{
	printf("%d\n%lu\n", ft_strlen("Test coucou vers"), strlen("Test coucou vers"));
	return 0;
}
