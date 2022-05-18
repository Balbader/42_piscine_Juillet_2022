#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void    ft_putstr(char *str)
{
    int     i;

    i = 0;
    while (str[i])
        i++;
    write(1, str, i);
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

    len = size * 2;
    final_str = (char *)malloc(len * sizeof(char *));
    if (size == 0)
    {
        *strs = NULL;
        free(strs);
    }
    i = 0;
    while (i < len)
    {
        ft_strcat(final_str, strs[i]);
        if (i < len - 1)
            ft_strcat(final_str, sep);
        i++;
    }
    return (final_str);
}

int     main(void)
{
    char    *strs[] = {"Hello", "my", "name", "is", "balou"};
    char    *sep = "+";
    printf("%s\n", ft_strjoin(6, strs, sep));
    return (0);
}
