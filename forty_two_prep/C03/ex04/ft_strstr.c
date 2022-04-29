#include <stdio.h>
#include <string.h>

char    *ft_strstr(char *str, char *to_find)
{
    int     i;

    i = 0;
    while(str[i])
    {
        if (str[i] == to_find[i])
            return (str);
        i++;
    }
    return (str);
}

int     main(void)
{
    char    a[] = "Hello My name is Balou";
    char    b[256] = "B";

    printf("%s\n", ft_strstr(a, b));
    return (0);
}
