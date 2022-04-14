#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
    if (nb == -2147483647)
    {
        write(1, "-2147483647", 11);
        return ;
    }
    if (nb < 0)
    {
        ft_putchar('-');
        ft_putnbr(nb * -1);
        return ;
    }
    if (nb <= 9)
        ft_putchar(nb + '0');
    else
    {
        ft_putnbr(nb / 10);
        ft_putchar(nb % 10 + '0');
    }

}

int     main(void)
{
    ft_putnbr(-2147483647);
    write(1, "\n", 1);
    ft_putnbr(2147483647);
    write(1, "\n", 1);
    ft_putnbr(-12);
    write(1, "\n", 1);
    ft_putnbr(112);
    write(1, "\n", 1);
    ft_putnbr(4);
    return (0);
}
