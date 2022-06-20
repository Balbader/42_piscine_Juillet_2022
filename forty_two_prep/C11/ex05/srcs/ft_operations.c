#include "../includes/ft_do_op.h"

void    ft_add(int a, int b)
{
    ft_putnbr(a + b);
    ft_putchar('\n');
}

void    ft_sub(int a, int b)
{
    ft_putnbr(a - b);
    ft_putchar('\n');
}

void    ft_mult(int a, int b)
{
    ft_putnbr(a * b);
    ft_putchar('\n');
}

void    ft_div(int a, int b)
{
    if (b == 0)
        write(1, "Stop : division by zero", 23);
    else
        ft_putnbr(a / b);
    ft_putchar('\n');
}

void    ft_mod(int a, int b)
{
    if (b == 0)
        write(1, "Stop : modulo by zero", 21);
    else
        ft_putnbr(a % b);
    ft_putchar('\n');
}
