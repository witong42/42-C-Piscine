/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryda-si <bryda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 13:29:09 by bryda-si          #+#    #+#             */
/*   Updated: 2024/03/17 13:29:29 by bryda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	aff_square(int x, int x_i, char *c)
{
	ft_putchar(c[0]);
	while (x_i < x - 2)
	{
		ft_putchar(c[1]);
		x_i++;
	}
	if (x >= 2)
		ft_putchar(c[2]);
	ft_putchar(c[3]);
}

void	rush(int x, int y)
{
	int	x_i;
	int	y_i;

	y_i = 0;
	x_i = 0;
	while ((y_i != y) && (y > 0 && x > 0))
	{
		if (y_i == 0)
			aff_square(x, x_i, "/*\\\n");
		else if ((y_i != y - 1))
			aff_square(x, x_i, "* *\n");
		else
			aff_square(x, x_i, "\\*/\n");
		y_i++;
	}
}
