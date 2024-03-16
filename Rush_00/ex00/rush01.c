/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: witong <witong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 09:56:43 by witong            #+#    #+#             */
/*   Updated: 2024/03/16 12:10:19 by witong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_head(int x)
{
	int	a;

	a = 1;
	ft_putchar('/');
	while (a < x - 1)
	{
		ft_putchar('*');
		a++;
	}
	if (x != 1)
	{
		ft_putchar('\\');
	}
	ft_putchar('\n');
}

void	print_body(int x, int y)
{
	int	a;
	int	b;

	b = 1;
	while (b < y - 1)
	{	
		a = 1;
		ft_putchar('*');
		while (a < x - 1)
		{
			ft_putchar(' ');
			a++;
		}
		if (x >= 2)
		{
			ft_putchar('*');
		}
		ft_putchar('\n');
		b++;
	}
}

void	print_tail(int x)
{
	int	a;

	a = 1;
	ft_putchar('\\');
	while (a < x - 1)
	{
		ft_putchar('*');
		a++;
	}
	if (x >= 2)
	{
		ft_putchar('/');
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x != 0 && y != 0)
	{
		print_head(x);
		if (y >= 2)
		{
			print_body(x, y);
			print_tail(x);
		}
	}
}
