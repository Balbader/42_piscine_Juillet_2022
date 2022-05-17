#include <stdlib.h>

int     ft_ultimate_range(int **range, int min, int max)
{
    int     length;
    int     i;

    i = 0;
    length = max - min;
    if (min >= max)
    {
        *range = NULL;
        return (0);
    }
    if (!(*range = (int*)malloc(length * sizeof(int))))
        return (-1);
    while (i < length - 1)
    {
        *range[i] = min;
        i++;
        min++;
    }
    return (length);
}
