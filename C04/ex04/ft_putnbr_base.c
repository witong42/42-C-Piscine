/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: witong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 17:34:45 by witong            #+#    #+#             */
/*   Updated: 2024/03/23 16:13:06 by witong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int is_base_invalid(char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (!base[0] || !base[1])
			return (0);
		else if (base[i] == base[i +1])
			return (0);
		else if (base[i] == '+'|| base[i] == '+')
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{

}
