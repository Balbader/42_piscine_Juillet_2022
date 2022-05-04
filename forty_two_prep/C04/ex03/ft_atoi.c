#include <stdio.h>
#include <stdlib.h>

int     ft_atoi(char *str)
{

}

int     main(void)
{
    int     sys;
    int     me;
    char    str[] = "12345";

    sys = atoi(str);
    me = ft_atoi(str);
    printf("str = %s\n", str);
    printf("sys: %d\n", sys);
    printf("me: %d\n", me);
    return (0);
}
