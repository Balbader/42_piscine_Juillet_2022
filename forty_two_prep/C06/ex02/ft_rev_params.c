#include <unistd.h>
#include <stdio.h>

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

void    ft_print_rev_params(int nb, char **str)
{
    char    *params_reversed[200];
    int     i;

    i = 0;
    while (nb > 0)
    {
        params_reversed[i] = str[nb];
        printf("%s\n", str[nb]);
        printf("%s\n", params_reversed[i]);
        nb--;
        i++;
    }
}

int     main(int argc, char **argv)
{
    ft_print_rev_params(argc, argv);
    return (0);
}
