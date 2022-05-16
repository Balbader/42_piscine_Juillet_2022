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
    return ((unsigned int)*s1 - (unsigned int)*s2);
}

void    ft_sort_params(int nb, char **str)
{
    char    temp[250];
    int     i;
    int     j;

    i = 1;
    j = i + 1;
    while (i < nb)
    {
        while (j < nb)
        {
            if(ft_strcmp(str[i], str[j]) > 0)
            {
                ft_strcpy(temp, str[i]);
                ft_strcpy(str[i], str[j]);
                ft_strcpy(str[j], temp);
                printf("%s\n", str[i]);
            }
            j++;
        }
        i++;
    }
}

int     main(int argc, char **argv)
{
    ft_sort_params(argc, argv);
    return (0);
}
