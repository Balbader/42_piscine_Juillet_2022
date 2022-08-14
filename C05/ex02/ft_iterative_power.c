/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 15:43:36 by baalbade          #+#    #+#             */
/*   Updated: 2022/08/14 15:43:46 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_iterative_power(int nb, int power)
{
    int     res;

    res = 1;
    if (power < 0)
        return (0);
    if ((nb == 0 && power == 0) || power == 0)
        return (1);
    while (power > 0)
    {
        res *= nb;
        power--;
    }
    return (res);
}
