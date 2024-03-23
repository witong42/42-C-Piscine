/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: witong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 17:33:34 by witong            #+#    #+#             */
/*   Updated: 2024/03/23 16:53:25 by witong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//
int	is_whitespace(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
	{
		return (1);
	}
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	atoi;
	int	sign;

	i = 0;
	atoi = 0;
	sign = 1;
	while (str[i] && is_whitespace(str[i]) == 1)
		i++;
	while (str[i] && str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while ((str[i] && str[i] >= '0' && str[i] <= '9'))
	{
		atoi = atoi * 10 + str[i] - 48;
		i++;
	}
	return (atoi * sign);
}
/*
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%d", ft_atoi(argv[1]));
	}	
	return (0);
}
*/
