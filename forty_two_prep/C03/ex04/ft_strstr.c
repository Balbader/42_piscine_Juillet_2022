#include <stdio.h>
#include <string.h>

char    *ft_strcpy(char *dest, char *src)
{
    int     i;

    i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

void    ft_strstr(char *str, char *to_find)
{
    char    temp[] = "";
    int     i;
    int     j;
    int     k;

    i = 0;
    j = 0;
    k = 0;
    while (str[i] != '\0')
    {
        if (str[i] == to_find[j])
        {
            while (str[i] != '\0')
            {
                temp[k] = str[i];
                k++;
                i++;
            }
        }
        i++;
        j++;
    }
    printf("%s\n", temp);
}


int     main(void)
{
    char    a[] = "Hello My name is Balou";
    char    b[256] = "B";

    ft_strstr(a, b);
    printf("%s\n", ft_strcpy(a, b));
    return (0);
}
