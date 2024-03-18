/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: witong <witong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 15:46:11 by witong            #+#    #+#             */
/*   Updated: 2024/03/18 15:58:31 by witong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//
int	ft_str_is_alpha(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
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
	char	a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char	b[] = "abcdefghijklmnopqrstuvwxyz";
	char	c[] = "AbCdEfGhIjKlMnOpQrStUvWxYz";
	char	d[] = "0A1b2C3$*&";
	char	e[] = "";

	printf("%d\n", ft_str_is_alpha(a));
	printf("%d\n", ft_str_is_alpha(b));
	printf("%d\n", ft_str_is_alpha(c));
	printf("%d\n", ft_str_is_alpha(d));
	printf("%d\n", ft_str_is_alpha(e));
	return (0);
}
*/
