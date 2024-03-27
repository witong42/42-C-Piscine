/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: witong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 17:58:46 by witong            #+#    #+#             */
/*   Updated: 2024/03/27 19:07:44 by witong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		i;

	i = ft_strlen(src);
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (((void *0)));
	i = 0;
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tab;
	t_stock_str	*ptr;
	int			i;	

	tab = (t_stock_str *)malloc(ac * sizeof(t_stock_str));
	ptr = tab;
	if (tab == ((void *)0))
		return (ptr);
	i = 0;
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = strdup(av[i]);
		i++;
	}
	tab[i].str = '\0';
	tab[i].copy = '\0';
	return (tab);
}
