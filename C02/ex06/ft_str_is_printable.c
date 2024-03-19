/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: witong <witong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 17:26:31 by witong            #+#    #+#             */
/*   Updated: 2024/03/19 17:13:10 by witong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
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
	char	f[] = "0A1b2C3$*& ~";
	char	g[] = "";

	printf("%d\n", ft_str_is_printable(a));
	printf("%d\n", ft_str_is_printable(b));
	printf("%d\n", ft_str_is_printable(c));
	printf("%d\n", ft_str_is_printable(d));
	printf("%d\n", ft_str_is_printable(e));
	printf("%d\n", ft_str_is_printable(f));
	printf("%d\n", ft_str_is_printable(g));
	return (0);
}
*/
