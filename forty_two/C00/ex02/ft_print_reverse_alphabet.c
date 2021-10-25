#include <unistd.h>

void ft_putchar(char c);
void ft_print_alphabet(void);

int     main(void)
{
    ft_print_alphabet();
    return (0);
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_alphabet(void)
{
    char    str[27] = "abcdefghijklmnopqrstuvwxyz";
    int     i;

    i = 0;
    while (str[i])
    {
        i++;
    }

    while (i >= 0)
    {
        ft_putchar(str[i]);
        i--;
    }
}
