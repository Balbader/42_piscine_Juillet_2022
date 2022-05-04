#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int     ft_atoi(char *str)

int     main(void)
{
    char    str[] = "   ---+--+1234ab567";
    int     res;

    res = atoi(str);
    printf("%s\n", str);
    printf("%d\n", res);
    return (0);
}
