/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 15:51:56 by baalbade          #+#    #+#             */
/*   Updated: 2022/08/14 15:52:00 by baalbade         ###   ########.fr       */
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

void    ft_print_program_name(char *name)
{
    ft_putstr(name);
}

int     main(int argc, char *argv[])
{
    (void) argc;
    ft_print_program_name(argv[0]);
    return (0);
}
