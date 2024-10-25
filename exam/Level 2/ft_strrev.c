#include <stdio.h>

char	*ft_strrev(char *str)
{
	int	i;
	int	rev_i;
	int	swap;

	i = 0;
	rev_i = 0;
	while (str[rev_i])
		rev_i++;
	rev_i--;
	while (i < rev_i)
	{
		swap = str[i];
		str[i] = str[rev_i];
		str[rev_i] = swap;
		i++;
		rev_i--;
	}
	return (str);
}

int	main(int ac, char **av)
{
	if (ac == 2)
	ft_strrev(av[1]);
	printf("%s", av[1]);
	return (0);
}
