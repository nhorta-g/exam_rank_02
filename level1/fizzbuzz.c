#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_write_number(int n)
{
	if (n < 9)
		ft_putchar(n + '0');
	else
	{
		ft_putchar((n / 10) + '0');
		ft_putchar((n % 10) + '0');
	}
}

int	main(void)
{
	int n;

	n = 1;
	while (n <= 100)
	{
		if (!(n % 3))
		{
			write(1, "fizz", 4);
			ft_putchar('\n');
		}
		else if (!(n % 5))
		{
			write(1, "buzz", 4);
			ft_putchar('\n');
		}
		else if (!(n % 3) && !(n % 5))
		{
			write(1, "fizzbuzz", 8);
			ft_putchar('\n');
		}
		else
		{
			ft_write_number(n);
			ft_putchar('\n');
		}
		n++;
	}

}
