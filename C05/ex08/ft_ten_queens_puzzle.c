/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 15:46:15 by baalbade          #+#    #+#             */
/*   Updated: 2022/08/14 15:46:17 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define SIZE 10

void	ft_print_solution(int *tab)
{
    int		i;
    char	solution[SIZE + 1];

    i = 0;
    while (i < SIZE)
    {
        solution[i] = tab[i] + 48;
        i++;
    }
    solution[i] = '\n';
    write(1, solution, SIZE + 1);
}

int ft_abs(int nb)
{
    if (nb < 0)
        return (nb * -1);
    else
        return (nb);
}

int ft_queen_position_is_ok(int i, int *tab)
{
    int j;

    j = 0;
    while (j < i)
    {
        if (tab[i] == tab[j] || ft_abs(i - j) == ft_abs(tab[i] - tab[j]))
            return (0);
        j++;
    }
    return (1);
}

void	ft_add_queens(int i, int *tab, int *count)
{
    tab[i] = 0;
    while (tab[i] < SIZE)
    {
        if (ft_queen_position_is_ok(i, tab))
        {
            if (i == SIZE - 1)
            {
                ft_print_solution(tab);
                (*count)++;
            }
            else
                ft_add_queens(i + 1, tab, count);
        }
        tab[i]++;
    }
}

int ft_ten_queens_puzzle(void)
{
    int count;
    int	tab[SIZE];

    count = 0;
    ft_add_queens(0, tab, &count);
    return (count);
}
