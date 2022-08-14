/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 15:44:21 by baalbade          #+#    #+#             */
/*   Updated: 2022/08/14 15:44:23 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_fibonacci(int index)
{
    if (index < 0)
        return (-1);
    if (index <= 1)
        return (index);
    return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
