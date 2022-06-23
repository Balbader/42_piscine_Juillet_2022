#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void	ft_init_arr(int *tab, int n)
{
    int index;

    index = 0;
    while (index < n)
    {
        tab[index] = index;
        index++;
    }
}

void	ft_print_arr(int *tab, int n)
{
    int		index;
    char	print;

    index = 1;
    while (index < n)
    {
        if (tab[index - 1] >= tab[index])
            return ;
        index++;
    }
    index = 0;
    while (index < n)
    {
        print = tab[index++] + 48;
        write(1, &print, 1);
    }
    if (tab[0] != (10 - n))
        write(1, ", ", 2);
}

void	ft_print_combn(int n)
{
    int tab[n];
    int i;

    i = 0;
    if (n < 1 || n > 9)
        return ;
    ft_init_arr(tab, n);
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

int     main(void)
{
    ft_print_combn(1);
    ft_putchar('\n');
    ft_putchar('\n');
    ft_print_combn(2);
    ft_putchar('\n');
    ft_putchar('\n');
    ft_print_combn(3);
    ft_putchar('\n');
    ft_putchar('\n');
    ft_print_combn(4);
    ft_putchar('\n');
    ft_putchar('\n');
    ft_print_combn(5);
    ft_putchar('\n');
    ft_putchar('\n');
    ft_print_combn(6);
    ft_putchar('\n');
    ft_putchar('\n');
    ft_print_combn(7);
    ft_putchar('\n');
    ft_putchar('\n');
    ft_print_combn(8);
    ft_putchar('\n');
    ft_putchar('\n');
    ft_print_combn(9);
    return (0);
}
