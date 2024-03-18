/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: witong <witong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 14:09:40 by witong            #+#    #+#             */
/*   Updated: 2024/03/18 14:29:59 by witong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	rev_i;
	int	swap;

	i = 0;
	rev_i = size - 1;
	while (i < size / 2)
	{
		while (tab[i] > tab[rev_i])
		{
			swap = tab[i];
			tab[i] = tab[rev_i];
			tab[rev_i] = swap;
		}
		i++;
		rev_i--;
	}
}
/*
int	main(void)
{
	int	tab[6];
	int	size;
	int	i;

	tab[0] = 4;
	tab[1] = 2;
	tab[2] = 3;
	tab[3] = 1;
	tab[4] = 5;
	tab[5] = 0;
	size = 6;
	i = 0;
	ft_sort_int_tab(tab, size);
	while (i < size)
	{
		printf("Id %d, Int %d\n", i, tab[i]);
		i++;
	}
	return (0);
}
*/
