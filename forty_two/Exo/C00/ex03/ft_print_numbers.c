#include <unistd.h>

void ft_putchar(char c);
void ft_print_numbers(void);

int     main(void)
{
    ft_print_numbers();
    return (0);
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_numbers(void)
{
    char    nbr[10] = "123456789";
    int     i;

    i = 0;
    while (nbr[i])
    {
        ft_putchar(nbr[i]);
        i++;
    }
}
