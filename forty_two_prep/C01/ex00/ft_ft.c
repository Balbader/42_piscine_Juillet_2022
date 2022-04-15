#include <unistd.h> 
#include <stdio.h>

void    ft_ft(int *nbr)
{
    int     forty_two;

    forty_two = 42;
    *nbr = forty_two;
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
