#include <unistd.h>

void    ft_putstr(char *str)
{
    int     i;

    i = 0;
    while (str[i])
        i++;
    write(1, str, i);
}

char    ft_strcpy(char *dest, char *src)
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

int     ft_strcmp(char *s1, char *s2)
{
    return ((unsigned char)*s1 - (unsigned char)*s2);
}

void    ft_sort_params(int nb, char **str)
{
    char    temp[250];
    int     i;
    int     j;

    i = 1;
    while (i < nb)
    {
        j = i + 1;
        while (j < nb)
        {
            if(ft_strcmp(str[i], str[j]) > 0)
            {
                ft_strcpy(temp, str[i]);
                ft_strcpy(str[i], str[j]);
                ft_strcpy(str[j], temp);
            }
            j++;
        }
        i++;
    }
}

int     main(int argc, char **argv)
{
    int     i;

    ft_sort_params(argc, argv);
    i = 1;
    while (i < argc)
    {
        ft_putstr(argv[i]);
        write(1, "\n", 1);
        i++;
    }
    return (0);
}
