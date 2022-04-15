#include <unistd.h> 

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_ft(int *ptr)
{
    *ptr = 42;
    ft_putchar(*ptr);
}

int     main(void)
{
    int     nb;
    
    nb = 22;
    ft_ft(nb);
    return (0);
}
