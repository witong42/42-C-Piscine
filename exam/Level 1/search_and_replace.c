/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: witong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 18:47:03 by witong            #+#    #+#             */
/*   Updated: 2024/04/02 18:58:37 by witong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	snr(char *str, char letter, char replace)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == letter)
		{
			str[i] = replace;
		}
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		if (av[2][1] == '\0' && av[3][1] == '\0')
			snr(av[1], av[2][0], av[3][0]);
	}
	write(1, "\n", 1);
	return (0);
}
