#include <stdio.h>
#include <stdlib.h>

int     ft_strlen(char *str)
{
    int     i;

    i = 0;
    while (str[i])
        i++;
    return (i);
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

int     main(void)
{
    char    *strs[] = {"Hello","my", "name", "is", "Balou"};
    char    *res;
    char    *sep;
    int     len_strs;
    int     i;

    sep = "-------------------------------";
    len_strs = sizeof(strs) / sizeof(strs[0]);
    printf("len_strs: %d\n", len_strs);
    res = (char *)malloc((len_strs * 2) * sizeof(char *));
    i = 0;
    while (i < len_strs)
    {
        ft_strcat(res, strs[i]);
        if (i < len_strs - 1)
            ft_strcat(res, sep);
        i++;
    }
    printf("%s\n", res);
    return (0);
}
