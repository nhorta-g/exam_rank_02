#include <unistd.h>
#include <stdio.h>

void	runstr(char c[127], char *av)
{
	while (av && *av)
	{
		printf("%d ", c[*av]);
		c[*(av++)] += 1;
	}
}

int	main(int ac, char **av)
{
	static char	c[127];
	int	i = -1;

	runstr(c, av[1]);
	runstr(c, av[2]);
	while (++i < 127)
		if (c[i] == 2)
			write(1, &i, 1);
	write(1, "\n", 1);
}
