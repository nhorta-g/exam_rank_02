#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int	a;
	int	b;
	int res;

	if (argc == 4)
	{
		int a = atoi(argv[1]);
		int b = atoi(argv[3]);

		if (argv[2][0] == '+')
			res = a + b;
		if (argv[2][0] == '-')
			res = a - b;
		if (argv[2][0] == '*')
			res = a * b;
		if (argv[2][0] == '/')
			res = a / b;
		if (argv[2][0] == '%')
			res = a % b;
		printf("%d\n", res);
	}
	else
	printf("\n");
}
