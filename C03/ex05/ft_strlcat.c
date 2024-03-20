/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: witong <witong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 11:36:40 by witong            #+#    #+#             */
/*   Updated: 2024/03/20 15:42:31 by witong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <bsd/string.h>
//
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_dest;
	unsigned int	len_src;
	unsigned int	i;

	len_dest = 0;
	len_src = 0;
	i = 0;
	while (dest[len_dest])
	{
		len_dest++;
	}
	while (src[len_src])
	{
		len_src++;
	}
	while (src[i] && (len_dest + i < size -1))
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	if (len_dest > size)
		return (len_src + size);
	else
		return (len_dest + len_src);
}
/*
int	main(void)
{
	char src1[10] = "William";
	char dest1[10] = "4242";
	char src[10] = "William";
	char dest[10] = "4242";

	printf("strlcat: %zu\n", strlcat(dest1, src1, 8));
	printf("ft_strlcat: %u", ft_strlcat(dest, src, 8));
	return (0);
}
*/
