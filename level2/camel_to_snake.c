#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int	len;

	len = -1;
	if (!str)
		return (0);
	while (str[++len])
		;
	return (len);

}

int main(int argc, char **argv)
{
	int i = -1;

	if (argc == 2)
	{
		while(argv[1][++i])
		{
			if(argv[1][i] >= 65 && argv[1][i] <= 90)
			{
				argv[1][i] = argv[1][i] + 32;
				ft_putchar('_');
			}
			ft_putchar(argv[1][i]);
		}
	}
	ft_putchar('\n');
}
