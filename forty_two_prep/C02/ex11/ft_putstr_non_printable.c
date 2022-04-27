#include <unistd.h>
#include <stdio.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr_non_printable(char *str)
{
    int     i;

    i = 0;
    while(str[i] != '\0')
    {
        if (str[i] < 20 && str[i] >= 127)
        {
            ft_putchar('\\');
            ft_putchar(str[i]);
            i++;
        }
        i++;
    }
}

int     main(void)
{
    char    str[] = "Coucou\ntu vas\tbien ?";
    ft_putstr_non_printable(str);
    return (0);
}
