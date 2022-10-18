#include<stdio.h>

size_t	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while(str[i])
		i++;
	return(i);
}

int main(void)
{
	char str[] = "";
	int a;

	printf("strlen: %ld\n", ft_strlen(str));
}
