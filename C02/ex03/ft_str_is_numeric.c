/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 17:30:50 by baalbade          #+#    #+#             */
/*   Updated: 2022/08/09 17:35:19 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_nbr(char c)
{
	if (!(c >= '0' && c <= '9'))
		return (1);
	return (0);
}

int	ft_str_is_alpha(char *str)
{
	int	i;

	if (str[i] == '\0')
		return (1);
	i = 0;
	while (str[i])
	{
		if (ft_is_nbr(str[i]))
			return (0);
		i++;
	}
	return (1);
}
