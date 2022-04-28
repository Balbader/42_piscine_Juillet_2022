#include <stdio.h>
#include <string.h>

int     ft_strlen(char *str)
{
    unsigned long     i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

char    *ft_strcat(char *dest, char *src)
{
    unsigned int     i;
    unsigned int     j;

    j = ft_strlen(dest);
    i = 0;
    while (src[i])
    {
        dest[j] = src[i];
        i++;
        j++;
    }
    dest[j] = '\0';
    return (dest);
}

int     main(void)
{
    char    a[] = " My Name is Balou!";
    char    b[256] = "Hello World,";

    printf("%lu\n", strlen(b));
    printf("%s\n", strcat(b, a));
    printf("%s\n", ft_strcat(b, a));
    return (0);
}
