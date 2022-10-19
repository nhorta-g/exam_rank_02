#include <stddef.h>
#include <string.h>
#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i], reject[i])
	{
		if (s[i] != reject[i])
			count++;
		i++;
	}
	while (s[i])
	{
		count++;
		i++;
	}
	return (count);
}

int main (int ac, char **av)
{
	int mine;
	int theirs;

	if (ac == 3)
	{
		mine = ft_strcspn(av[1], av[2]);
		theirs = strcspn(av[1], av[2]);
		printf("mine: %d | theirs: %d\n", mine, theirs);
	}
}
