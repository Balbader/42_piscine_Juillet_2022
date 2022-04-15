#include <stdio.h>

void    ft_ultimate_ft(int *********nbr)
{
    *********nbr = 42;
}

int     main(void)
{
    int     nb;
    int     *ptr;
    int     **ptr2;
    int     ***ptr3;
    int     ****ptr4;
    int     *****ptr5;
    int     ******ptr6;
    int     *******ptr7;
    int     ********ptr8;
    int     *********ptr9;

    nb = 99;
    ptr = &nb;
    ptr2 = &ptr;
    ptr3 = &ptr2;
    ptr4 = &ptr3;
    ptr5 = &ptr4;
    ptr6 = &ptr5;
    ptr7 = &ptr6;
    ptr8 = &ptr7;
    ptr9 = &ptr8;

    printf("%d\n", nb);
    ft_ultimate_ft(ptr9);
    printf("%d\n", nb);
    return(0);
}
