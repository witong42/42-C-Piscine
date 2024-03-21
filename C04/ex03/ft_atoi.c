/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: witong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 17:33:34 by witong            #+#    #+#             */
/*   Updated: 2024/03/21 17:50:06 by witong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	atoi;

	i = 0;
	atoi = 0;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		atoi = atoi * 10 + str[i]- 48;
		i++;
	}
	return (atoi);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%d", ft_atoi(argv[1]));
	}	
	return (0);
}
