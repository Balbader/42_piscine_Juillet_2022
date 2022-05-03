#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_neg(int nb)
{
    if (nb == -2147483648)
    {
        ft_putchar('-');
        write(1, "2147483648", 11);
    }
}

void    ft_putnbr(int nb)
{
    if (nb == -2147483648)
        ft_print_neg(nb);
    if (nb > -2147483648 && nb < 0)
    {
        ft_putchar('-');
        nb *= -1;
    }
    if (nb >= 0 && nb < 10)
        ft_putchar(nb + '0');
    if (nb >= 10)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
}
