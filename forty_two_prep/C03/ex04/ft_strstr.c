#include <stdio.h>
#include <string.h>

char    *ft_strstr(char *str, char *to_find)
{
    unsigned int    i;
    unsigned int    j;
    char            temp[256];

    i = 0;
    while (str[i])
    {
        j = 0;
        while (to_find[j])
        {
            if (str[i + j] == to_find[j])
                temp[j] = str[i];
            j++;
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
