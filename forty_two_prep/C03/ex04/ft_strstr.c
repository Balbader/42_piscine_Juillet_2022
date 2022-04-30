#include <stdio.h>
#include <string.h>

char    *ft_strstr(char *str, char *to_find)
{
    unsigned int i;
    unsigned int j;

    i = 0;
    while (str[i])
    {
        j = 0;
        while (str[i] == to_find[j])
        {
            j++;
            if (str[i] != to_find[j])
                return (str + i);
        }
        i++;
    }
    return (0);
}

int     main(void)
{
    char    a[] = "Hello My name is Balou";
    char    b[256] = "y";
    char    *res;

    res = ft_strstr(a, b);
    printf("%s", res);
    return (0);
}
