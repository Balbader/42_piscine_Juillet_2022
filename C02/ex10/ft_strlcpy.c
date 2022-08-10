/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 15:45:36 by baalbade          #+#    #+#             */
/*   Updated: 2022/08/10 15:55:52 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *str, unsigned int size)
{
	unsigned int	i;

	if (!dest || !str)
		return (0);
	if (size == 0)
		return (ft_strlen(str));
	i = 0;
	while (str[i] && i < (size - 1))
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(str));
}
