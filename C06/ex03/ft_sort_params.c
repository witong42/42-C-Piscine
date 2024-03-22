/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: witong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 13:09:30 by witong            #+#    #+#             */
/*   Updated: 2024/03/22 14:26:17 by witong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s1[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	print_args(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	if (argc > 0)
	{
		while (argv[i] && i < argc)
		{
			j = 0;
			while (argv[i][j])
			{
				write(1, &argv[i][j], 1);
				j++;
			}
			i++;
			write(1, "\n", 1);
		}
	}
}

int	main(int argc, char **argv)
{
	char	*swap;
	int		i;
	int		j;

	i = 1;
	if (argc > 0)
	{
		while (argv[i] && i < argc)
		{
			j = i;
			while (argv[j + 1] && ft_strcmp(argv[j], argv[j + 1]) > 0 && j > 0)
			{
				swap = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = swap;
				j--;
			}
			i++;
		}
		print_args(argc, argv);
	}
	return (0);
}
