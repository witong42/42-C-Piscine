/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: witong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 14:38:57 by witong            #+#    #+#             */
/*   Updated: 2024/03/18 14:55:35 by witong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//
char	*ft_strcpy(char *dest, char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	str_dest[] = "Piscine 42\n";
	char	str_src[] = "Hello World!\n";

	ft_strcpy(str_dest, str_src);
	printf("%s", str_dest);
}
*/
