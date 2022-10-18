#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

size_t	ft_strlen(char *str)
{
	unsigned int	i;

	i = -1;
	while(str[++i])
		;
	return(i);
}

int main(int argc, char **argv)
{
	int	i;
	size_t len;

	if (argc == 2)
	{
		len = ft_strlen(argv[1]);
		while(i < len)
		{
			ft_putchar(argv[1][len - i - 1]);
			i++;
		}
		ft_putchar('\n');
	}
		else
	ft_putchar('\n');
}
