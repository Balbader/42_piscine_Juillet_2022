/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 08:24:56 by baalbade          #+#    #+#             */
/*   Updated: 2022/08/10 15:38:25 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_to_lower(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

int	ft_check_char(char c)
{
	if (c <= 32 || c == '+' || c == '-')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	ft_to_lower(str);
	i = 0;
	while (str[i])
	{
		if ((ft_check_char(str[i])) && str[i + 1] >= 'a' && str[i + 1] <= 'z')
			str[i + 1] -= 32;
		i++;
	}
	return (str);
}
