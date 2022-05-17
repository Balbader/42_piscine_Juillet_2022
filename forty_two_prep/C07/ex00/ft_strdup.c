#include <stdlib.h>

int     ft_strlen(char *str)
{
    int     i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

char    *ft_strdup(char *src)
{
    char    *duplicate;
    int     src_len;

    src_len = ft_strlen(src);
    duplicate = (char *)malloc(src_len * sizeof(char));
    if (!(duplicate = (char *)malloc(src_len * sizeof(char))))
        return (0);
    duplicate = src;
    return (duplicate);
}
