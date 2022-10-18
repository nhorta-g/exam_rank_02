#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main (int argc, char **argv)
{
	int		i;

	i = 0;
	if (argc != 2)
	{
		ft_putchar('\n');
		return(0);
	}
	while (argv[1][i] && (argv[1][i] == 32 || argv[1][i] == 9))
		i++;
	if (!argv[1][i])
	{
		ft_putchar('\n');
		return(0);
	}
	while (argv[1][i] && (argv[1][i] != 32 && argv[1][i] != 9))
	{
		ft_putchar(argv[1][i]);
		i++;
	}
	ft_putchar('\n');
	return(1);
}
