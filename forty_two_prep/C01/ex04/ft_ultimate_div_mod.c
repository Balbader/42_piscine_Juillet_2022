#include <unistd.h>

void    ft_ultiate_div_mod(int *a, int *b)
{
    int     temp_a;
    int     temp_b;

    temp_a = *a / *b;
    temp_b = *a % *b;
    *a = temp_a;
    *b = temp_b;
}
