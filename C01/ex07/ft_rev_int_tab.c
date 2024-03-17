
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	rev_i;
	int	swap;

	i = 0;
	rev_i = size - 1;
	while (i < size / 2)
	{
		swap = tab[i];
		tab[i] = tab[rev_i];
		tab[rev_i] = swap;
		i++;
		rev_i++;
	}
}
