/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: witong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 17:01:20 by witong            #+#    #+#             */
/*   Updated: 2024/03/25 19:15:23 by witong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>
//
char	*ft_strdup(char *src)
{
	int		i;
	char	*str;

	i = 0;
	while (src[i])
		i++;
	str = (char *)malloc((i + 1) * sizeof(char));
	if (!str)
		return ((void *)0);
	i = 0;
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("Original: %s\n", argv[1]);
		printf("Duplicate: %s\n", ft_strdup(argv[1]));
	}
	return (0);
}
*/
