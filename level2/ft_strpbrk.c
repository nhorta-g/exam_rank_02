#include <stdio.h>

char *ft_strpbrk(const char *s1, const char *s2)
{
	int	i;
	int	j;


	if (!s1 || !s2)
		return (0);
	i = -1;
	while (s1[++i])
	{
		j = -1;
		while (s2[++j])
		{
			if (s1[i] == s2[j]);
				return ((char *)(s1 + i));
		}
	}
	return ((char *)NULL);
}

int main ()
{
	char str1[] = "casa";
	char str2[] = "sasdad";
	printf("%s\n", ft_strpbrk(str1, str2));
}
