#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_make_hex_printable(int nb)
{
    char    hex[] = "0123456789abcdef";

    ft_putchar(hex[nb / 16]);
    ft_putchar(hex[nb % 16]);
}

void    ft_putstr_non_printable(char *str)
{
    int     i;
    char    c;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 32 && str[i] <= 126)
            ft_putchar(str[i]);
        else
        {
            c = '\\';
            ft_putchar(c);
            ft_make_hex_printable(str[i]);
        }
        i++;
    }
}
