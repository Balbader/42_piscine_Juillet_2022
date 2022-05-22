#include <stdio.h>

int     ft_strlen(char *str)
{
    int     i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

int     ft_check_base(char c)
{
    if (c == '+' || c == '-' || c == ' ' || c == '\t' || c == '\n' || c == '\r'
            || c == '\v')
        return (0);
    return (1);
}

int     ft_base_position(char *base, char c)
{
    int     i;

    i = 0;
    while (i < ft_strlen(base))
    {
        if (base[i] == c)
            return (i);
        i++;
    }
    return (-1);
}

int     ft_base_is_ok(char *base)
{
    unsigned int    i;
    unsigned int    j;

    i = 0;
    if (ft_strlen(base) < 2)
        return (0);
    while (base[i])
    {
        if (ft_check_base(base[i]))
            return (0);
        i++;
    }
    i = 0;
    while (base[i])
    {
        j = i + 1;
        while (base[j])
        {
            if (base[i] == base[j])
                return (0);
            j++;
        }
        i++;
    }
    return (1);
}

int     ft_atoi_base(char *str, char *base)
{

}
