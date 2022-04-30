#include <stdio.h>
#include <string.h>

char    *ft_strcpy(char *src, char *dest)
{
    unsigned int    i;

    i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    return (dest);
}

char    *ft_strstr(char *str, char *to_find)
{
    unsigned int    i;
    unsigned int    j;
    char            temp[256];

    i = 0;
    j = 0;
    while (str[i])
    {
        if (str[i] == to_find[j])
        {
            while (str[j])
            {
                temp[j] = str[j];
                j++;
            }
            break ;
        }
        i++;
    }
    printf("temp: %s\n", temp);
    ft_strcpy(temp, str);
    return (str);
}

int     main(void)
{
    char    a[] = "Hello My name is Balou";
    char    b[256] = "a";
    char    *res;

    res = ft_strstr(a, b);
    printf("%s", res);
    return (0);
}
