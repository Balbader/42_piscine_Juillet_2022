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
