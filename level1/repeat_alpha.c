/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuno <nuno@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 23:06:14 by nuno              #+#    #+#             */
/*   Updated: 2022/10/17 14:58:30 by nuno             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	int	i;
	int	j;

	i = -1;
	if (argc == 2)
	{
		while(argv[1][++i])
		{
			j = -1;
			if (argv[1][i] > 64 && argv[1][i] < 91)
				while (argv[1][i] - 65 >= ++j)
					ft_putchar(argv[1][i]);
			else if (argv[1][i] > 96 && argv[1][i] < 123)
				while (argv[1][i] - 97 >= ++j)
					ft_putchar(argv[1][i]);
			else
				ft_putchar(argv[1][i]);
		}
		write(1, "\n", 1);
	}
		else
	{
		write(1, "\n", 1);
		return (0);
	}
}
