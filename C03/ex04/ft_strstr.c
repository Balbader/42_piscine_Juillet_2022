/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 19:55:39 by baalbade          #+#    #+#             */
/*   Updated: 2022/08/11 19:58:25 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i] == to_find[j])
		{
			j++;
			if (str[i] != to_find[j])
				return (str + i);
		}
		i++;
	}
	return (0);
}
