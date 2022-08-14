/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 15:52:08 by baalbade          #+#    #+#             */
/*   Updated: 2022/08/14 15:52:11 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putstr(char *str)
{
    int     i;

    i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
    write(1, "\n", 1);
}

void    ft_print_params(int nb, char **str)
{
    int     i;

    i = 1;
    while (i < nb)
    {
        ft_putstr(str[i]);
        i++;
    }
}

int     main(int argc, char **argv)
{
    ft_print_params(argc, argv);
    return (0);
}
