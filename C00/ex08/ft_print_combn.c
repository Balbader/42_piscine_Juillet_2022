/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 12:04:38 by baalbade          #+#    #+#             */
/*   Updated: 2022/08/09 12:19:14 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_init_arr(int *tab, int nb)
{
	int	i;

	i = 0;
	while (i < nb)
	{
		tab[i] = i;
		i++;
	}
}

void	ft_print_arr(int *tab, int nb)
{
	int	i;
	int	c;

	i = 1;
	while (i < nb)
	{
		if (tab[i - 1] >= tab[i])
			return ;
		i++;
	}
	i = 0;
	while (i < nb)
	{
		c = tab[i] + '0';
		ft_putchar(c);
		i++;
	}
	if (tab[0] != (10 - nb))
		write(1, ", ", 2);
}

void	ft_print_combn(int n)
{
	int	tab[n];
	int	i;

	if (n < 1 || n > 9)
		return ;
	ft_init_arr(tab, n);
	i = 0;
	while (tab[0] <= 10 - n)
	{
		ft_print_arr(tab, n);
		while (i < n)
		{
			if (tab[i] >= 9 && n > 1)
			{
				tab[i] = 0;
				tab[i - 1]++;
			}
			if (i == n -1)
				tab[i]++;
			i++;
		}
		i = 0;
	}
}
