#include <unistd.h>

void	ft_init_arr(int *tab, int n)
{
    int i;

    i = 0;
    while (i < n)
    {
        tab[i] = i;
        i++;
    }
}

void	ft_print_arr(int *tab, int n)
{
    int		i;
    char    c;

    i = 1;
    while (i < n)
    {
        if (tab[i - 1] >= tab[i])
            return ;
        i++;
    }
    i = 0;
    while (i < n)
    {
        c = tab[i++] + '0';
        write(1, &c, 1);
    }
    if (tab[0] != (10 - n))
        write(1, ", ", 2);
}

void	ft_print_combn(int n)
{
    int tab[n];
    int i;

    if (n < 1 || n > 9)
        return ;
    ft_init_arr(tab, n);
    i = 0;
    while (tab[0] <= 10 - n)
    {
        ft_print_arr(tab, n);
        while (i < n)
        {
            if (tab[i] >= 9 && n > 1)
            {
                tab[i] = 0;
                tab[i - 1]++;
            }
            if (i == n - 1)
                tab[i]++;
            i++;
        }
        i = 0;
    }
}
