/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: witong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 13:16:11 by witong            #+#    #+#             */
/*   Updated: 2024/04/01 19:46:48 by witong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	is_sep(char *charset, char c)
{
	int	i;

	i = 0;
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
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i] && charset[i])
	{
		while (is_sep(charset, str[i]) == 1)
			i++;
		if (!str[i])
			break ;
		while (is_sep(charset, str[i]) == 0)
			i++;
		words++;
	}
	return (words);
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
		word_len = 0;
		while (is_sep(charset, str[total_len]) == 1)
			total_len++;
		if (!str[total_len])
			break ;
		while (is_sep(charset, str[total_len + word_len]) == 0)
			word_len++;
		array[i] = ft_strdup_words(str, total_len, word_len);
		total_len += word_len;
		i++;
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

int	main(int ac, char **av)
{
	int		i;
	char	**display;
	char	**s;

	s = ft_split("Success", " ");
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
