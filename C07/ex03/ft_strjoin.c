/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: witong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 16:05:20 by witong            #+#    #+#             */
/*   Updated: 2024/03/26 18:25:03 by witong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>
//
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *s1, char *s2)
{
	int	i;
	int	j;

	i = ft_strlen(s1);
	j = 0;
	while (s2[j])
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	return (s1);
}

int	ft_total_len(char **strs, char *sep, int size)
{
	int	total_len;
	int	i;

	i = 0;
	total_len = 0;
	while (strs[i] && i < size)
	{
		total_len += ft_strlen(strs[i]);
		if (i != size - 1)
			total_len += ft_strlen(sep);
		i++;
	}
	return (total_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		total_len;
	int		i;

	if (size <= 0)
	{
		str = malloc(1);
		*str = '\0';
		return (str);
	}
	total_len = ft_total_len(strs, sep, size);
	str = (char *)malloc(sizeof(char) * (total_len + 1));
	if (str == ((void *)0))
		return (((void *)0));
	*str = 0;
	i = 0;
	while (strs[i] && i < size)
	{
		ft_strcat(str, strs[i]);
		if (i != size - 1)
			ft_strcat(str, sep);
		i++;
	}
	str[total_len] = '\0';
	return (str);
}
/*
int	main(int argc, char **argv)
{
	int		size;
	char	*sep;
	char	*str;

	size = argc - 1;
	sep = " | ";
	str = ft_strjoin(size, &argv[1], sep);
	printf("%s", str);
}
*/
