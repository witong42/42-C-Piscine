/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: witong <witong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 17:14:39 by witong            #+#    #+#             */
/*   Updated: 2024/03/19 10:50:35 by witong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//
int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
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
	char	c[] = "abcdefghijklmnopqrstuvwxyz";
	char	d[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char	e[] = "AbCdEfGhIjKlMnOpQrStUvWxYz";
	char	f[] = "0A1b2C3$*&";
	char	g[] = "";

	printf("%d\n", ft_str_is_uppercase(a));
	printf("%d\n", ft_str_is_uppercase(b));
	printf("%d\n", ft_str_is_uppercase(c));
	printf("%d\n", ft_str_is_uppercase(d));
	printf("%d\n", ft_str_is_uppercase(e));
	printf("%d\n", ft_str_is_uppercase(f));
	printf("%d\n", ft_str_is_uppercase(g));
	return (0);
}
*/
