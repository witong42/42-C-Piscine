/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush0X.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryda-si <bryda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 13:37:28 by bryda-si          #+#    #+#             */
/*   Updated: 2024/03/17 13:37:49 by bryda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	aff_square(int x, int x_i, char *s)
{
	ft_putchar(s[0]);
	while (x_i < x - 2)
	{
		ft_putchar(s[1]);
		x_i++;
	}
	if (x >= 2)
		ft_putchar(s[2]);
	ft_putchar('\n');
}

void	rush(int x, int y, char *s[])
{
	int	x_i;
	int	y_i;

	y_i = 0;
	x_i = 0;
	while ((y_i != y) && (y > 0 && x > 0))
	{
		if (y_i == 0)
			aff_square(x, x_i, s[3]);
		else if ((y_i != y - 1))
			aff_square(x, x_i, s[4]);
		else
			aff_square(x, x_i, s[5]);
		y_i++;
	}
}
