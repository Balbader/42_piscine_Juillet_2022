#include <stdlib.h>

int     *ft_map(int *tab, int length, int(*f)(int))
{
    int     *res;
    int     i;

    res = (int *)malloc(sizeof(int) * length);
    i = 0;
    while (i < length)
    {
        res[i] = (*f)(tab[i]);
        i++;
    }
    return (res);
}
