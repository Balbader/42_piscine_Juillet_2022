#include <stdio.h>
#include <stdlib.h>

char    *ft_strcpy(char *dest, char *src)
{
    int     i;

    i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

int     main(void)
{
    char    str[] = "Hello world my name is balou";
    //char    sep[] = "bitch";
    char    res[250][250];
    char    temp[250];
    int     i;
    //int     j;

    i = 0;
    while(str[i])
    {
        if (str[i] != ' ')
            temp[i] = str[i];
        else
            temp[i] = '\0';
        i++;
    }
    j = 0;
    while ()
    printf("%s\n", temp);
    return (0);
}
