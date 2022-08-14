/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 15:44:55 by baalbade          #+#    #+#             */
/*   Updated: 2022/08/14 15:44:58 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_check_if_prime(int nb)
{
    int     i;
    int     count;

    count = 0;
    i = 1;
    while (i <= nb)
    {
        if (nb % i == 0)
            count += 1;
        i++;
    }
    if (count == 2)
        return (1);
    return (0);
}

int     ft_find_next_prime(int nb)
{
    int     i;

    i = nb;
    while (i != ft_check_if_prime(i))
    {
        if (ft_check_if_prime(i))
            return (i);
        i++;
    }
    return (0);
}
