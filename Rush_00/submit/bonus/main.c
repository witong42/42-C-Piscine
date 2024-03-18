/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryda-si <bryda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 13:36:52 by bryda-si          #+#    #+#             */
/*   Updated: 2024/03/17 14:30:36 by bryda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);
void	rush(int x, int y, char *s[]);
int		ft_atoi(char *str);

int	main(int argc, char *argv[])
{
	if (argc != 6)
	{
		ft_putstr("Bonjour !\nIl me faut 5 arguments afin que je ");
		ft_putstr("puisse m'executer sans soucis:\n\n");
		ft_putstr("[Arguments 1]: un chiffre superieur a 0 qui ");
		ft_putstr("represente l'axe [x]\n[Arguments 2]: un chiffre ");
		ft_putstr("superieur a 0 qui represente l'axe [y]\n");
		ft_putstr("[Arguments 3/4/5]: une chaines de caractere ");
		ft_putstr("qui represente les caracteres ");
		ft_putstr("qui compose le rectangle\n");
	}
	else
		rush(ft_atoi(argv[1]), ft_atoi(argv[2]), argv);
	return (0);
}
