/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: witong <witong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 11:33:51 by witong            #+#    #+#             */
/*   Updated: 2024/03/19 14:04:57 by witong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char	s1[] = "Willy";
	char	s2[] = "William";
	int		result;

	result = ft_strcmp(s1, s2);
	printf("%d\n", result);
	if (result < 0)
	{
		printf("%s is less than %s\n", s1, s2);
	}
	else if (result > 0)
	{
		printf("%s is greater than %s\n", s1, s2);
	}
	else
	{
		printf("%s is equal to %s\n", s1, s2);
	}
	return (0);
}
*/
