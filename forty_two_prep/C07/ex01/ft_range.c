#include <stdlib.h>

int     *ft_range(int min, int max)
{
    int     *range;
    int     length;
    int     i;

    length = max - min;
    range = (int*)malloc(length * sizeof(int));
    i = 0;
    if (min >= max)
        return (range);
    if (!(range = (int*)malloc(length * sizeof(int))))
        return (0);
    while (i < max - 1)
    {
        range[i] = min;
        i++;
        min++;
    }
    return (range);
}
