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
    int     i;

    i = 1;
}

int     main(int argc, char **argv)
{
    return (0);
}
