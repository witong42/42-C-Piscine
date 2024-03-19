/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: witong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 16:46:48 by witong            #+#    #+#             */
/*   Updated: 2024/03/19 10:49:48 by witong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*
int	main(void)
{
	char	a[] = "0123456789";
	char	b[] = "9876543210";
	char	c[] = "AbCdEfGhIjKlMnOpQrStUvWxYz";
	char	d[] = "0A1b2C3$*&";
	char	e[] = "";

	printf("%d\n", ft_str_is_numeric(a));
	printf("%d\n", ft_str_is_numeric(b));
	printf("%d\n", ft_str_is_numeric(c));
	printf("%d\n", ft_str_is_numeric(d));
	printf("%d\n", ft_str_is_numeric(e));
	return (0);
}
*/
