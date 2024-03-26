/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: witong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 17:34:45 by witong            #+#    #+#             */
/*   Updated: 2024/03/24 02:48:42 by witong           ###   ########.fr       */
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
		if (base[i] == '+' || base[i] == '-'
				|| base [i] < 33 || base[i] > 126)
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
			write(1, &base[nbr], 1);
		}
	}
}

int	main(void)
{
	ft_putnbr_base(42, "01");
	write(1, "\n", 1);
	ft_putnbr_base(42, "0202");
	write(1, "\n", 1);
	ft_putnbr_base(42, "++42");
	write(1, "\n", 1);
	ft_putnbr_base(42, "1");
	write(1, "\n", 1);
	ft_putnbr_base(42, "-1234-");
	write(1, "\n", 1);
	ft_putnbr_base(42, "0123456789ABCDEF");
	write(1, "\n", 1);
	ft_putnbr_base(42, "!@#$%^&");
	write(1, "\n", 1);
	ft_putnbr_base(42, "poneyvif");
	write(1, "\n", 1);
	write(1, "42:", 3);
	ft_putnbr_base(42, "0123456789");
	write(1, "\n2a:", 4);
	ft_putnbr_base(42, "0123456789abcdef");
	write(1, "\n-2a:", 5);
	ft_putnbr_base(-42, "0123456789abcdef");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "0");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "+-0123456789abcdef");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "\t0123456789abcdef");
	return (0);
}
