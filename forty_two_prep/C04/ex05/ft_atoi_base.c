#include <stdio.h>

int     ft_strlen(char *str)
{
    int     i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

int     ft_check_base(char *base)
{
    int     i;

    i = 0;
    while (base[i])
    {
        if (base[i] == '+' || base[i] == '-' || base[i] == '\t'
                || base[i] == '\n' || base[i] == '\r'
                || base[i] == '\v' || base[i] == ' ')
            return (0);
        i++;
    }
    return (1);
}

int     ft_atoi_base(char *str, char *base)
{

}
