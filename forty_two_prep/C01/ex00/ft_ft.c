#include <unistd.h> 
#include <stdio.h>

void    ft_ft(int *nbr)
{
    *nbr = 42;
}

int     main(void)
{
    int     ptr;

    ptr = 88;
    printf("before: %d\n", ptr);
    ft_ft(&ptr);
    printf("after: %d\n", ptr);
    return (0);
}
