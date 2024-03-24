/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: witong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 17:35:55 by witong            #+#    #+#             */
/*   Updated: 2024/03/24 02:50:53 by witong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//
int	is_whitespace_and_sign(char *str, int *str_i)
{
	int	sign;

	sign = 1;
	while ((str[*str_i] >= 9 && str[*str_i] <= 13) || str[*str_i] == 32)
		(*str_i)++;
	while ((str[*str_i] == '+' || str[*str_i] == '-'))
	{
		if (str[*str_i] == '-')
			sign *= -1;
		(*str_i)++;
	}
	return (sign);
}

int	base_len(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (!base[0] || !base[1])
		return (0);
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ')
			return (0);
		else if (base[i] < 32 || base[i] > 126)
			return (0);
		i++;
	}
	return (i);
}

int	base_check(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	str_i;
	int	base_i;
	int	digit;
	int	output;
	int	sign;

	str_i = 0;
	base_i = base_len(base);
	sign = is_whitespace_and_sign(str, &str_i);
	output = 0;
	if (base_i >= 2 && sign != 0)
	{
		while (str[str_i])
		{
			digit = base_check(str[str_i], base);
			if (digit == -1)
				break ;
			output = output * base_i + digit;
			str_i++;
		}
	}
	return (output * sign);
}
/*
int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%d\n", ft_atoi_base(argv[1], argv[2]));
	}	
	return (0);
}
*/
