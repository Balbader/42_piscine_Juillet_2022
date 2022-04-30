#include <stdio.h>
#include <string.h>

char    *ft_strstr(char *str, char *to_find)
{
    char    *pos = to_find;
    return (0);
}

int     main(void)
{
    char    a[] = "Hello My name is Balou";
    char    b[256] = "a";
    char    *res;

    //printf("%s\n", ft_strstr(a, b));
    res = strstr(a, b);
    if (res == NULL)
        printf("NULL");
    else
        printf("%s\n", res);
    return (0);
}
