/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 17:38:33 by baalbade          #+#    #+#             */
/*   Updated: 2022/08/09 17:39:20 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_printable(char c)
{
	if (!(c >= 32 && c <= 126))
		return (1);
	return (0);
}

int	ft_str_is_printable(char *str)
{
	int	i;

	if (str[i] == '\0')
		return (1);
	i = 0;
	while (str[i])
	{
		if (ft_is_printable(str[i]))
			return (0);
		i++;
	}
	return (1);
}
