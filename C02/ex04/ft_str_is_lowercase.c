/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: witong <witong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 16:57:37 by witong            #+#    #+#             */
/*   Updated: 2024/03/18 17:10:00 by witong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
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

	printf("%d\n", ft_str_is_lowercase(a));
	printf("%d\n", ft_str_is_lowercase(b));
	printf("%d\n", ft_str_is_lowercase(c));
	printf("%d\n", ft_str_is_lowercase(d));
	printf("%d\n", ft_str_is_lowercase(e));
	printf("%d\n", ft_str_is_lowercase(f));
	printf("%d\n", ft_str_is_lowercase(g));
	return (0);
}
*/
