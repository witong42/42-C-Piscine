#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int index;
	int c;

	index = 0;
	c = 0;
	while (index < (size / 2))
	{
		c = tab[index];
		tab[index] = tab[size -1 -index];
		tab[size -1 -index] = c;
		index++;
	}
}

int		main(void)
{
	int tab[] = {0, 1, 2, 3, 4, 5};
	int size = 6;
	int i;

	i = 0;
	ft_rev_int_tab(tab, size);
	while (tab[i])
	{
		printf("%d", tab[i]);
		i++;
	}
	return (0);
}
