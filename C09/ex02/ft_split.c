/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: witong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 13:16:11 by witong            #+#    #+#             */
/*   Updated: 2024/04/02 14:10:10 by witong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>
//
int	is_sep(char *charset, char c)
{
	int	i;

	i = 0;
	if (c == '\0')
		return (1);
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	c_count;
	int	w_count;

	c_count = 0;
	w_count = 0;
	while (str[c_count])
	{
		if (is_sep(charset, str[c_count]) == 0
			&& is_sep(charset, str[c_count + 1]) == 1)
		{
			w_count++;
		}
		c_count++;
	}
	return (w_count);
}

char	*ft_strdup_words(char *str, int total_len, int word_len)
{
	char	*tab;
	int		i;

	i = 0;
	tab = (char *)malloc(sizeof(char) * (word_len + 1));
	if (tab == NULL)
		return (NULL);
	while (i < word_len)
	{
		tab[i] = str[total_len + i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

void	split(char **array, char *str, char *charset)
{
	int	i;
	int	total_len;
	int	word_len;

	i = 0;
	total_len = 0;
	while (str[total_len])
	{
		if (is_sep(charset, str[total_len]) == 1)
			total_len++;
		else
		{
			word_len = 0;
			while (is_sep(charset, str[total_len + word_len]) == 0)
				word_len++;
			array[i] = ft_strdup_words(str, total_len, word_len);
			total_len += word_len;
			i++;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**array;
	int		total_words;

	total_words = count_words(str, charset);
	array = (char **)malloc(sizeof(char *) * (total_words + 1));
	if (array == NULL)
		return (array);
	array[total_words] = NULL;
	split(array, str, charset);
	return (array);
}
/*
int	main(int ac, char **av)
{
	int		i;
	char	**display;
	char	**s;

	s = ft_split("I love cheeseburgers and fries and diet coke", " ");
	i = 0;
	while (s[i])
	{
		printf("%s\n", s[i]);
		i++;
	}
	if (ac == 3)
	{
		i = 0;
		display = ft_split(av[1], av[2]);
		while (display[i])
		{
			printf("%s\n", display[i]);
			i++;
		}
	}
	return (0);
}
*/
