/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: witong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 17:34:45 by witong            #+#    #+#             */
/*   Updated: 2024/03/23 18:23:02 by witong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	is_base_invalid(char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (!base[0] || !base[1])
			return (0);
		else if (base[i] == base[i + 1])
			return (0);
		else if (base[i] == '+' || base[i] == '-')
			return (0);
		else if (base[i] < 32 || base[i] > 126)
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;
	int	digit;

	i = 0;
	if (is_base_invalid(base) == 1)
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			nbr = -nbr;
		}
		while (base[i])
			i++;
		if (nbr >= i)
		{
			ft_putnbr_base(nbr / i, base);
			ft_putnbr_base(nbr % i, base);
		}
		else
		{
			digit = base[nbr % i];
			write(1, &digit, 1);
		}
	}
}
/*
int	main(void)
{
	ft_putnbr_base(42, "01");
	write(1, "\n", 1);
	ft_putnbr_base(42, "02468");
	write(1, "\n", 1);
	ft_putnbr_base(42, "Wi");
	write(1, "\n", 1);
	ft_putnbr_base(42, "AZ");
	write(1, "\n", 1);
	ft_putnbr_base(42, "ftgd");
	write(1, "\n", 1);
	ft_putnbr_base(42, "0123456789ABCDEF");
	write(1, "\n", 1);
	ft_putnbr_base(42, "!@#$%^&");
	write(1, "\n", 1);
	ft_putnbr_base(42, "c++");
	write(1, "\n", 1);
	return (0);
}
*/
