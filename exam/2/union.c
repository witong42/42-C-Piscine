#include <unistd.h>

int	check_dbl(char *str, char c, int i)
{
	i--;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i--;
	}
	return (0);
}

char	*ft_strcat(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (s2[j])
	{
		s1[i + j] = s2[j];
		j++;
	}
	s1[i + j] = '\0';
	return (s1);
}

void	display(char *s1)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (check_dbl(s1, s1[i], i) == 0)
			write(1, &s1[i],1);
		i++;
	}	
}

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		ft_strcat(av[1], av[2]);
		display(av[1]);
	}
	write(1, "\n", 1);
	return (0);
}
