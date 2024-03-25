/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: witong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 19:18:14 by witong            #+#    #+#             */
/*   Updated: 2024/03/25 20:01:10 by witong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	i = 0;
	if (min >= max)
		return ((void*)0);
	range = (int *)malloc(sizeof(int) * (max - min));
	if (range == ((void*)0))
		return ((void*)0);
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}

int	main(void)
{
	int	*range = ft_range(10,100);
	int	i;
	
	i = 0;
	while (range[i])
	{
		printf("%d\t", range[i]);
		i++;
	}
	return (0);
}
