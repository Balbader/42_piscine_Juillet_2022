/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdemetz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 17:49:47 by bdemetz           #+#    #+#             */
/*   Updated: 2022/07/23 23:37:45 by bdemetz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/*int	strl_len(char *str)
{
	int	len;
	len = ft_strlen(str);
	while(len % 3 != 0)
		len++;
	return (len);
}*/

void	fill_grid(char **grid, char *str)
{
	int	i;
	int	j;
	int	str_len;

	str_len = ft_strlen(str);
	i = str_len / 3 + (str_len % 3 != 0);
	str_len--;
	while (--i >= 0)
	{
		j = 3;
		while (--j >= 0)
		{
			if (str_len < 0)
				grid[i][j] = 32;
			else
				grid[i][j] = str[str_len--];
		}
	}
}

char	**create_grid(char *str)
{
	char	**tab;
	tab = (char**) malloc( (ft_strlen(str) / 3 + (ft_strlen(str) % 3 != 0)) * sizeof(char*));
	int i = -1;

//	printf("malloc:%i\n", (ft_strlen(str) / 3 + (ft_strlen(str) % 3 != 0)) * sizeof(char*));

	while (++i < ft_strlen(str) / 3 + (ft_strlen(str) % 3 != 0))
		tab[i] = (char*) malloc(60 * sizeof(char));
	return (tab);
}

char	**build_grid(char *str)
{
	char **grid;
	grid = create_grid(str);
	fill_grid(grid, str);
	return (grid);
}
