/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: witong <witong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 11:05:10 by witong            #+#    #+#             */
/*   Updated: 2024/03/19 11:08:08 by witong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	while (src[len])
	{
		len++;
	}
	if (size < 1)
	{
		return (len);
	}
	while (src[i] && i < size -1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}
/*
int	main(void)
{
	char	src[] = "I love cheese and burgers";
	char	dest[12];
	unsigned int	len;
	
	len = ft_strlcpy(dest, src, sizeof(dest));
	printf("Copied string: %s\n", dest);
	printf("Length of the source string: %d\n", len);
	return (0);
}
*/
