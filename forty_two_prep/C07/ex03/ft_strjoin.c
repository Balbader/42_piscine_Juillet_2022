#include <stdlib.h>

int     ft_strlen(char *str)
{
    int     i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

int     final_size(int size, char **strs, char *sep)
{
    int     i;
    int     tot_len;

    i = 0;
    tot_len = 0;
    while (i < size)
    {
        tot_len = tot_len + ft_strlen(strs[i]);
        i++;
    }
    if (!size)
        return (1);
    tot_len = tot_len + ft_strlen(sep) * (size - 1) + 1;
    return (tot_len);
}

char    *ft_strcat(char *dest, char *src)
{
    int     i;
    int     j;

    i = 0;
    while (dest[i])
        i++;
    j = 0;
    while (src[j])
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (dest);
}

char    *ft_strjoin(int size, char **strs, char *sep)
{
    char    *final_str;
    int     len;
    int     i;

    len = final_size(size, strs, sep);
    if (!(final_str = (char *)malloc(len * sizeof(char))))
        return (0);
    i = 0;
    while (i < size)
    {
        ft_strcat(final_str, strs[i]);
        if (i < size - 1)
            ft_strcat(final_str, sep);
        i++;
    }
    return (final_str);
}
