/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: witong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 12:49:58 by witong            #+#    #+#             */
/*   Updated: 2024/03/26 16:03:56 by witong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = ((void *)0);
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * (max - min));
	if (*range == ((void *)0))
		return (-1);
	i = 0;
	while (i < max - min)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (i);
}

int	main(void)
{
	int	*range;
	int	min;
	int	max;
	int	result;
	int	i;

	range = ((void *)0);
	min = 800;
	max = 1000;
	i = 0;
	result = ft_ultimate_range(&range, min, max);
	if (result == -1)
		return (1);
	else if (result == 0)
		return (1);
	while (i < max - min)
	{
		printf("%d ", range[i]);
		i++;
	}
	return (0);
}
