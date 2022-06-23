#include <unistd.h>
#include <stdio.h>

int     ft_strlen(char *str)
{
    int     i;

    i = 0;
    while (str[i])
        i++;
    return (i);;
}

int     ft_check_base(char *base)
{
    unsigned int    i;
    unsigned int    j;

    if (ft_strlen(base) < 2)
        return (0);
    i = 0;
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
    int     base_length;

    if (!ft_check_base(base))
        return ;
    base_length = ft_strlen(base);
    if (nbr == -2147483648)
	{
		write(1, "-", 1);
		ft_putnbr_base(2147483648 / base_length, base);
		ft_putnbr_base(2147483648 % base_length, base);
		return ;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	if (nbr < base_length)
	{
		write(1, &base[nbr], 1);
		return ;
	}
	ft_putnbr_base(nbr / base_length, base);
	ft_putnbr_base(nbr % base_length, base);
}

int     main(void)
{
    int     nbr;
    char    base[] = "0123456789ABCDEF";

    nbr = 3390;
    ft_putnbr_base(nbr, base);

    return (0);
}
