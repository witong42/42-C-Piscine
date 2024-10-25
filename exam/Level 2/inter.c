#include <unistd.h>

int	check_dbl(char *str, char c, int i)
{
	i--;
	while (i >= 0)
	{
		if (str[i] == c)
			return (1);
		i--;
	}
	return (0);
}

int	main(int ac, char **av)
{
	int	i;
	int 	j;

	i = 0;
	if (ac == 3)
	{
		while (av[1][i])
		{
			j = 0;
			while (av[2][j])
			{
				if (av[1][i] == av[2][j] && check_dbl(av[1], av[1][i], i) == 0)
				{
					write(1, &av[1][i], 1);
					break ;
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
