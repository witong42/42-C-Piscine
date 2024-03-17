#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[] = {0, 1, 2, 3, 4, 5};
	int	size = 6;
	int	i;

	i = 0;
	ft_rev_int_tab(tab, size);
	while (tab[i])
	{
		printf("%d", tab[i]);
		i++;
	}
	return (0);
}
