#include <unistd.h>

size_t	ft_strlen(char *str)
{
	size_t	len;

	len = 0;
	while(*(str++))
		len++;
}

int	main(int ac, char **av)
{
	char	*str;
	size_t	max_len;

	max_len = 0;
	if (ac == 2)
	{
		if (ft_strlen(av[1]) >= ft_strlen(av[2]))
			max_len = ft_strlen(av[1]);
		else
			max_len = ft_strlen(av[2]);
		str = (char *)malloc(max_len * sizeof char + 1);


	}
	else
		write(1, "\n", 1);
}
