/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolve.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdemetz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 23:26:54 by bdemetz           #+#    #+#             */
/*   Updated: 2022/07/24 14:28:33 by bdemetz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);

	return (nb * ft_recursive_power(nb, power-1));
}

int	resolve(char **grid, char* str, int rows)
{
	int i = -1;
	int j;

	while (++i < rows)
	{
		if (i != 0)
			printf(" ");
		j = -1;
		while (++j < 3)
		{
			if(j == 0 && grid[i][j] != 32)
			{
				//number_from_dict()
			}
//			printf("%c", grid[i][j]);
//			printf(number_from_dict());
		}
		printf("\n");
		if (i > 0)
		{
			printf("%i",/*number_from_dict(*/100 * ft_recursive_power(10, rows - i));
		}
	}
}
