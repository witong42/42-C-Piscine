/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: witong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 07:21:07 by witong            #+#    #+#             */
/*   Updated: 2024/03/27 11:01:16 by witong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//
int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	else if (nb == 2 || nb == 3)
		return (1);
	else if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	i = 5;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (ft_is_prime(nb) != 1)
		nb++;
	return (nb);
}
/*
int	main(void)
{
	int	i;
	int	test_cases[] = {-4, 1, 16, 28, 55, 15, 71, 97, 23456739, 2147483647, 0};

	i = 0;
	while (test_cases[i]) 
	{
		printf("%d is input : %d is the next prime\n",
			test_cases[i], ft_find_next_prime(test_cases[i]));
		i++;
	}
	return (0);
}
*/
