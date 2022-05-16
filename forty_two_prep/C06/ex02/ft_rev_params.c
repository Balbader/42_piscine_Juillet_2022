#include <unistd.h>

void    ft_putstr(char *str)
{
    int     i;

    i = 0;
    while (str[i])
        i++;
    write(1, str, i);
}

char    ft_strcpy(char *dest, char *src )
{
    int     i;

    i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (*dest);
}

void    ft_rev_params(int nb, char **str)
{
    char    temp[250][250];
    int     i;

    i = 0;
    while (i < nb)
    {
        ft_strcpy(temp[i], str[i]);
        i++;
    }
    i = nb - 1;
    while (i > 0)
    {
        ft_putstr(temp[i]);
        write(1, "\n", 1);
        i--;
    }
}

int     main(int argc, char **argv)
{
    ft_rev_params(argc, argv);
    return (0);
}
