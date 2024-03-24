/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: witong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 07:17:52 by witong            #+#    #+#             */
/*   Updated: 2024/03/24 08:55:34 by witong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//
int	ft_is_prime(int nb)
{
	int	i;

	i = 5;
	if (nb <= 1)
		return (0);
	else if (nb == 2 || nb == 3)
		return (1);
	else if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	while (i * i <= nb)
	{
		if (nb % i == 0 || nb % (i + 2) == 0)
			return (0);
		i += 6;
	}
	return (1);
}
/*
int	main(void)
{
	int	i;
	int	test_cases[] = {2, 3, 5, 7, 11, 13, 15, 20, 29, 30, 71, 97, 1063};

	i = 0;
	while (test_cases[i]) 
	{
		if (ft_is_prime(test_cases[i]))
			printf("%d is a prime number.\n", test_cases[i]);
		else
			printf("%d is not a prime number.\n", test_cases[i]);
		i++;
	}
	return (0);
}
*/
