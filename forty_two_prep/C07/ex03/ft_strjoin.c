#include <stdlib.h>
#include <stdio.h>

char    *ft_strcpy(char **dst, char **src)
{
    int     i;

    i = 0;
    while (*src[i])
    {
        *dst[i] = *src[i];
        i++;
    }
    return (*dst);
}

char    *ft_strjoin(int size, char **strs, char *sep)
{
    char    **final_str;
    int     len;
    int     i;

    len = size + (size - 1);
    final_str = malloc(len * sizeof(char *));
    if (size == 0)
    {
        *strs = NULL;
        free(strs);
    }
    i = 0;
    while (i < len)
    {
        ft_strcpy(*final_str[i], strs[i]);
        i++;
    }
    return (*final_str);
}

int     main(void)
{
    char    *str[] = {"Hello", "my", "name", "is", "balou"};
    char    sep[] = "+";
    printf("%s\n", ft_strjoin(5, str, sep));
    return (0);
}
