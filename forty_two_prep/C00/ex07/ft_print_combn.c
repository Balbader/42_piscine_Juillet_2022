#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_combn(int n)
{

}

int     main(void)
{
    ft_print_combn(1);
    ft_putchar('\n');
    ft_print_combn(2);
    ft_putchar('\n');
    ft_print_combn(3);
    ft_putchar('\n');
    ft_print_combn(4);
    ft_putchar('\n');
    ft_print_combn(5);
    ft_putchar('\n');
    ft_print_combn(6);
    ft_putchar('\n');
    ft_print_combn(7);
    ft_putchar('\n');
    ft_print_combn(8);
    ft_putchar('\n');
    ft_print_combn(9);
    return (0);
}
