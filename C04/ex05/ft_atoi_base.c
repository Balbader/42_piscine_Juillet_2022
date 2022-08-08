#include <stdio.h>

/* Check if every given char is in base */
int     ft_compare_char_to_base(char c, char *base)
{
    int     i;

    i = 0;
    while (base[i] != c)
        i++;
    if (base[i] == '\0')
        return (0);
    return (1);
}

/* Find out the base nbr related to each str char */
int     ft_find_base_nbr(char c, char *base)
{
    int     base_nbr;
    int     i;

    base_nbr = 0;
    i = 0;
    while (base[i])
    {
        if (base[i] == c)
        {
            base_nbr = i;
            return (base_nbr);
        }
        i++;
    }
    base_nbr = i;
    return (base_nbr);
}

/* Check base to make sure that it fits base definition */
int     ft_check_base(char *base)
{
    int     i;
    int     j;

    i = 0;
    while (base[i])
        i++;
    if (i < 2)
        return (0);
    i = 0;
    while (base[i])
    {
        if (base[i] == '-' || base[i] == '+' || base[i] == '\f'
                || base[i] == '\t' || base[i] == '\n' || base[i] == '\r'
                || base[i] == '\v' || base[i] == ' ')
            return (0);
        j = i + 1;
        while (base[j])
        {
            if (base[j] == base[i])
                return (0);
            j++;
        }
        i++;
    }
    return (1);
}

/* Function to deal with 'white' spaces and count the amount of '-' in str */
int     ft_count_min(char *str, int *c)
{
    int     count;
    int     i;

    count = 0;
    i = 0;
    while (str[i] == '\f' || str[i] == '\t' || str[i] == '\n'
            || str[i] == '\r' || str[i] == '\v' || str[i] == ' ')
        i++;
    while (str[i] && (str[i] == '+' || str[i] == '-'))
    {
        if (str[i] == '-')
            count++;
        i++;
    }
    *c = i;
    return (count);
}

int     ft_atoi_base(char *str, char *base)
{
    int     i;
    int     sign;
    int     res;
    int     divider;

    res = 0;
    sign = 1;
    i = 0;
    while(base[i])
        i++;
    divider = i;
    if (ft_count_min(str, &i) % 2)
        sign *= -1;
    while (str[i] && ft_compare_char_to_base(str[i], base))
    {
        res *= divider;
        res += ft_find_base_nbr(str[i], base);
        i++;
    }
    return (res * sign);
}

int main(void)
{
    char *str = "++---Basil";
    char *base = "0123456789ABCDEF";
    printf("%d\n", ft_atoi_base(str, base));
    return (0);
}
