/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: witong <witong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 11:34:44 by witong            #+#    #+#             */
/*   Updated: 2024/03/19 15:19:34 by witong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[i] && s2[i] && s1[i] == s2[i] && (i < n - 1))
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

	result = ft_strncmp(s1, s2, 6);
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
