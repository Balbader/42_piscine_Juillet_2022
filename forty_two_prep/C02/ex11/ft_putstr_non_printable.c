#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_make_hex_printable(unsigned char nb)
{
    char    hex[] = "0123456789abcdef";

    ft_putchar(hex[nb / 16]);
    ft_putchar(hex[nb % 16]);
}

void    ft_putstr_non_printable(char *str)
{
    int     i;

    i = 0;
}

int     main(void)
{
    char    str[] = "Coucou\ntu vas\tbien ?";
    ft_putstr_non_printable(str);
    return (0);
}
