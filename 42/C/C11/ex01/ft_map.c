/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 10:34:16 by baalbade          #+#    #+#             */
/*   Updated: 2022/07/26 12:59:48 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*dup;
	int	i;

	dup = (int *)malloc(sizeof(int) * (length + 1));
	if (!dup)
		return (0);
	dup[0] = 0;
	i = 0;
	while (i < length)
	{
		dup[i] = (*f)(tab[i]);
		i++;
	}
	dup[i] = 0;
	return (dup);
}
