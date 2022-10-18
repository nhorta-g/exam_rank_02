#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	int	i;

	if (argc == 2)
	{
		i = 0;
		while(argv[1][i])
		{
			if (((65 <= argv[1][i]) && (argv[1][i] <= 89))
			|| ((97 <= argv[1][i]) && (argv[1][i] <= 121)))
				ft_putchar(argv[1][i] + 1);
			else if ((argv[1][i] == 90) || (argv[1][i] == 122))
				ft_putchar(argv[1][i] - 25);
			else
				ft_putchar(argv[1][i]);
			i++;
		}
		ft_putchar('\n');
	}
	else
		ft_putchar('\n');
}
