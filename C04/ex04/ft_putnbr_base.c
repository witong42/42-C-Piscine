/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: witong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 17:34:45 by witong            #+#    #+#             */
/*   Updated: 2024/03/27 10:26:46 by witong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_base_invalid(char *base)
{
	int	i;
	int	j;

	if (!base[0] || !base[1])
		return (1);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;

	i = 0;
	if (is_base_invalid(base) == 0)
	{
		while (base[i])
			i++;
		if (nbr == -2147483648)
		{
			write (1, "-", 1);
			ft_putnbr_base(-(nbr / i), base);
			write(1, &base[-(nbr % i)], 1);
			return ;
		}
		else if (nbr < 0)
		{
			write(1, "-", 1);
			nbr = -nbr;
		}
		if (nbr >= i)
		{
			ft_putnbr_base(nbr / i, base);
		}
		write(1, &base[nbr % i], 1);
	}
}
/*
int	main(void)
{
	ft_putnbr_base(-12, "01");
	write(1, "\n", 1);
	ft_putnbr_base(40, "poneyvif");
	write(1, "\n", 1);
	ft_putnbr_base(-2147483648, "012345678");
	write(1, "\n", 1);
	ft_putnbr_base(53, "0123456789abcdef");
	write(1, "\n", 1);
	ft_putnbr_base(42, "01");
	write(1, "\n", 1);
	ft_putnbr_base(42, "0202");
	write(1, "\n", 1);
	ft_putnbr_base(42, "++42");
	write(1, "\n", 1);
	ft_putnbr_base(42, " 123");
	write(1, "\n", 1);
	ft_putnbr_base(42, "-1234-");
	write(1, "\n", 1);
	ft_putnbr_base(42, "0123456789ABCDEF");
	write(1, "\n", 1);
	return (0);
}
*/
