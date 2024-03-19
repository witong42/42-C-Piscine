/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: witong <witong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 11:36:40 by witong            #+#    #+#             */
/*   Updated: 2024/03/19 19:45:28 by witong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int     i;
	unsigned int     j;

	i = 0;
	j = 0;
	while(dest[i] && i < size)
	{
		i++;
	}
	while(src[j] && (i + j < size - 1))
	{
		dest[i + j] = src[j];
		j++;
	}
	if (i < size)
	{
		dest[i + j] = '\0';
	}
	while (src[j])
	{
		j++;
	}
	return (i + j);
}
/*
int	main(void)
{
	char dest[15] = "Hello,";
	char src[10] = "World!";
	unsigned int		size = 18;
	unsigned int	result;

	result = ft_strlcat(dest, src, size);
	printf("%s", dest);
	printf("Length of resulting string %u\n", result);
	return (0);
}
*/
