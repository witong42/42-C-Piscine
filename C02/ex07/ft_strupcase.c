/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: witong <witong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 17:40:20 by witong            #+#    #+#             */
/*   Updated: 2024/03/19 10:51:45 by witong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//
char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
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

	printf("%s\n", ft_strupcase(a));
	printf("%s\n", ft_strupcase(b));
	printf("%s\n", ft_strupcase(c));
	printf("%s\n", ft_strupcase(d));
	printf("%s\n", ft_strupcase(e));
	printf("%s\n", ft_strupcase(f));
	printf("%s\n", ft_strupcase(g));
	return (0);
}
*/
