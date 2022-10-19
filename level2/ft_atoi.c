#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	res;
	int	signal;

	signal = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		*str++;
	if (*str == '-')
		signal = -1;
	while (*str == '-' || *str == '+')
		*str++;
	while(*str >= '0' && *str <= '9')
	{
		res = res * 10 + *str - '0';
		*str++;
	}
	return (res * signal);
}


int main (int ac, char **av)
{
	int mine;
	int theirs;

	if (ac == 2)
	{
		mine = ft_atoi(av[1]);
		theirs = atoi(av[1]);
		printf("mine: %d | theirs: %d\n", mine, theirs);
	}
}
