/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: witong <witong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 17:55:29 by witong            #+#    #+#             */
/*   Updated: 2024/03/19 11:04:41 by witong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//
char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	if (str[0] >= 'a' && str[0] <= 'z' && str[0] != '\0')
	{
		str[0] -= 32;
	}
	while (str[i])
	{
		if (!((str[i - 1] >= '0' && str[i - 1] <= '9')
				|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
				|| (str[i - 1] >= 'a' && str[i - 1] <= 'z')))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		++i;
	}
	return (str);
}
/*
int	main(void)
{
	char	a[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un\n";
	char	b[] = "sALUt, CoMmEnT tU vAs ? 42MoTs qUaRaNtE-DeUx; ciNquantE+Et+uN\n";

	printf("%s", ft_strcapitalize(a));
	printf("%s", ft_strcapitalize(b));
	return (0);
}
*/
