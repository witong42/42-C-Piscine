/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: witong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 18:16:27 by witong            #+#    #+#             */
/*   Updated: 2024/04/02 18:42:02 by witong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	repeat_alpha(char *str)
{
	int	i;
	int	index;

	i = 0;
	while (str[i])
	{
		index = 0;
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			index = str[i] - 'a';
		}
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			index = str[i] - 'A';
		}
		while (index >= 0)
		{
			write(1, &str[i], 1);
			index--;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		repeat_alpha(av[1]);
	}
	write(1, "\n", 1);
	return (0);	
}
