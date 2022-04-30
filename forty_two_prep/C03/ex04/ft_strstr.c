#include <stdio.h>
#include <string.h>

char    *ft_strstr(char *str, char *to_find)
{
    unsigned int    i;
    unsigned int    j;
    char            temp[256];

    i = 0;
    j = 0;
    while (str[i])
    {
        if (str[i] != to_find[i])
            i++;
        else if (str[i] == to_find[i])
        {
            while (str[i])
            {
                temp[j] = str[i];
                i++;
                j++;
            }
        }
        i++;
    }
    return (0);
}

int     main(void)
{
    char    a[] = "Hello My name is Balou";
    char    b[256] = "a";
    char    *res;

    res = ft_strstr(a, b);
    printf("%s\n", res);
    return (0);
}
