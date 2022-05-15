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
}

void    ft_sort_params(int nb, char **str)
{
    char    *temp[250];
    int     i;

    temp[0] = str[1];
    ft_putstr("Before: ");
    ft_putstr(*temp);
    write(1, "\n", 1);
    i = 1;
    while (i < nb)
    {
        if (temp[0][0] > str[i][0])
            temp[0] = str[i];
        i++;
    }
    ft_putstr("After: ");
    ft_putstr(*temp);
}

int     main(int argc, char **argv)
{
    ft_sort_params(argc, argv);
    return (0);
}
