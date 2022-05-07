#include <unistd.h>

int     ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);;
}

int     ft_check_base(char *base)
{
    unsigned int i;
    unsigned int j;

    if (ft_strlen(base) < 2)
        return (0);
    while (base[i])
    {
        if (base[i] == '+' || base[i] == '-')
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

void    ft_putnbr_base(int nbr, char *base)
{
    int base_length;
}

int     main(void)
{
    return (0);
}
