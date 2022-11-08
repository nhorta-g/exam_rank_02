#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	i, j;
	int	c[127];

	i = 0;
	j = -1;

	while (c[i] && i < 128)
	{
		c[i] = 0;
		i++;
	}
	i = -1;
	if (ac == 3)
	{
		while (av[1][++i])
		{
			while (av[2][++j])
			{
				if ((av[1][i] == av[2][i]) && c[av[1][i]] == 0)
				{
					ft_putchar(i);
					c[av[1][i]] = 1;
				}
			}
		}
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
}
