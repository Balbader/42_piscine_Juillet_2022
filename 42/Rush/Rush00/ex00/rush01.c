/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 21:24:53 by baalbade          #+#    #+#             */
/*   Updated: 2022/07/10 08:57:38 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	ft_check_xy(int x, int y, char a)
{
	if (x <= 0 || y <= 0)
		return (0);
	if (x == 1 && y == 1)
	{
		ft_putchar(a);
		return (0);
	}
	return (1);
}

void	ft_print_line(int x, char a, char b, char c)
{
	int	i;

	i = 0;
	while (i < x)
	{	
		if (i == 0)
			ft_putchar(a);
		if (i == x - 1)
			ft_putchar(c);
		if (i > 0 && i < x - 1)
			ft_putchar(b);
		i++;
	}
}

int	ft_special_case(int x, int y)
{
	int	i;

	if (y == 1)
	{
		ft_print_line(x, '/', '*', '\\');
		return (0);
	}
	if (x == 1)
	{
		i = 0;
		while (i < y)
		{
			if (i == 0)
				ft_putchar('/');
			if (i == y - 1)
				ft_putchar('\\');
			if (i > 0 && i < y - 1)
				ft_putchar('*');
			ft_putchar('\n');
			i++;
		}
		return (0);
	}
	return (1);
}

void	rush(int x, int y)
{
	int	i;

	if (!(ft_check_xy(x, y, 'o')))
		return ;
	if (!(ft_special_case(x, y)))
		return ;
	i = 0;
	while (i < y)
	{
		if (i == 0)
			ft_print_line(x, '/', '*', '\\');
		if (i > 0 && i < y - 1)
			ft_print_line(x, '*', ' ', '*');
		if (i == y - 1)
			ft_print_line(x, '\\', '*', '/');
		ft_putchar('\n');
		i++;
	}
}
