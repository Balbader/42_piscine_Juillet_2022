#include <stdio.h>
#include <stdlib.h>

int     main(void)
{
    char    *str = "Hello my name is balou";
    char    res[50][50];
    int     i;
    int     j;
    int     k;

    i = 0;
    j = 0;
    k = 0;
    while (str[i])
    {
        while (str[i] != ' ')
        {
            res[j][k] = str[i];
            k++;
            i++;
        }
        printf("res[%d]: %s\n", j, res[j]);
        k = 0;
        j++;
        i++;
    }
    return (0);
}
