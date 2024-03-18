/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: witong <witong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 13:27:24 by witong            #+#    #+#             */
/*   Updated: 2024/03/18 14:03:10 by witong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//
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
		rev_i--;
	}
}
/*
int	main(void)
{
	int	tab[6];
	int	size;
	int	i;

	tab[0] = 0;
	tab[1] = 1;
	tab[2] = 2;
	tab[3] = 3;
	tab[4] = 4;
	tab[5] = 5;
	size = 6;
	i = 0;
	ft_rev_int_tab(tab, size);
	while (i < size)
	{
		printf("Id %d, Int %d\n", i, tab[i]);
		i++;
	}
	return (0);
}
*/
