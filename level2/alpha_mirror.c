#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int	i;

	if (argc == 2)
	{
		i = -1;
		while(argv[1][++i])
		{
			if ((65 <= argv[1][i]) && (argv[1][i] <= 90))
				ft_putchar(-1 * argv[1][i] + 155);
			else if ((97 <= argv[1][i]) && (argv[1][i] <= 122))
				ft_putchar(-1 * argv[1][i] + 219);
			else
				ft_putchar(argv[1][i]);
		}
		ft_putchar('\n');
	}
	else
		ft_putchar('\n');
}
