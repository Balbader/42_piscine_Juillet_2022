/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 09:08:23 by baalbade          #+#    #+#             */
/*   Updated: 2022/08/10 09:08:27 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* turn str to lowercase */
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

int	ft_check_whitespace(char c)
{
	if (c <= 32)
		return (1);
	return (0);
}

/*
char	*ft_strcapitalize(char *str)
{
	return (str);
}
*/

#include <stdio.h>

int	main(void)
{
	char	str[] = "            saLut, coMMent tu vAs ? 42Mots quarANTe-deux; cinquaNte+Et+uN         ";

	ft_to_lower(str);
	printf("%s\n", str);
	return (0);
}
