#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int	i;

	if (argc == 4 && !argv[2][1] && !argv[3][1])
	{
		i = -1;
		while (argv[1][++i])
		{
			if (argv[1][i] == argv[2][0])
				ft_putchar(argv[3][0]);
			else
				ft_putchar(argv[1][i]);
		}
		ft_putchar('\n');
	}
	else
		ft_putchar('\n');
}
