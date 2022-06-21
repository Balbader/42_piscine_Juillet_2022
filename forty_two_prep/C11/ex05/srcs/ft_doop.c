#include "../includes/ft_do_op.h"

void    ft_putnbr(int nb)
{
    if (nb == -2147483648)
    {
        write(1, "-2147483648", 11);
        return ;
    }
    if (nb < 0)
    {
        ft_putchar('-');
        ft_putnbr(nb * -1);
        return ;
    }
    if (nb < 10)
    {
        nb += '0';
        ft_putchar(nb);
        return ;
    }
    ft_putnbr(nb / 10);
    ft_putnbr(nb % 10);
}

int		ft_atoi(char *str)
{
    int i;
    int sign;
    int result;

    i = 0;
    sign = 1;
    result = 0;
    while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
            || str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
        i++;
    while (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sign *= -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + str[i] - 48;
        i++;
    }
    return (result * sign);
}

int		is_an_ope(char *str)
{
    if (str[1] != '\0')
        return (0);
    if (str[0] != '+' && str[0] != '-' && str[0] != '*'
            && str[0] != '/' && str[0] != '%')
        return (0);
    return (1);
}

void	ft_doop(int a, int b, char *sign)
{
    static void (*ope[5])(int, int) = {ft_add, ft_sub, ft_mult, ft_div, ft_mod};

    if (sign[0] == '+')
        (*ope[0])(a, b);
    else if (sign[0] == '-')
        (*ope[1])(a, b);
    else if (sign[0] == '*')
        (*ope[2])(a, b);
    else if (sign[0] == '/')
        (*ope[3])(a, b);
    else if (sign[0] == '%')
        (*ope[4])(a, b);
}

int		main(int argc, char **argv)
{
    if (argc != 4)
        return (0);
    if (is_an_ope(argv[2]))
        ft_doop(ft_atoi(argv[1]), ft_atoi(argv[3]), argv[2]);
    else
        write(1, "0\n", 2);
    return (0);
}
