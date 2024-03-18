/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: witong <witong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 17:49:46 by witong            #+#    #+#             */
/*   Updated: 2024/03/18 17:52:18 by witong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
	i++;
	}
	return (str);
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

	printf("%s\n", ft_strlowcase(a));
	printf("%s\n", ft_strlowcase(b));
	printf("%s\n", ft_strlowcase(c));
	printf("%s\n", ft_strlowcase(d));
	printf("%s\n", ft_strlowcase(e));
	printf("%s\n", ft_strlowcase(f));
	printf("%s\n", ft_strlowcase(g));
	return (0);
}
*/
