#include <unistd.h>

void ft_putchar(char c);
void ft_print_chars(char a, char b, char c);
void ft_print_seperator(void);
void ft_print_comb(void);

int     main(void)
{
    ft_print_comb();
    return (0);
}

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_chars(char a, char b, char c)
{
    ft_putchar(a);
    ft_putchar(b);
    ft_putchar(c);
}

void    ft_print_seperator(void)
{
    ft_putchar(',');
    ft_putchar(' ');
}

void    ft_print_comb(void)
{
    char    a;
    char    b;
    char    c;

    a = '0';
    while (a <= '7')
    {
        b = a + 1;
        while (b <= '8')
        {
            c = b + 1;
            while (c <= '9')
            {
                ft_print_chars(a, b, c);
                if (a != '7')
                    ft_print_seperator();
                c++;
            }
            b++;
        }
        a++;
    }
}
