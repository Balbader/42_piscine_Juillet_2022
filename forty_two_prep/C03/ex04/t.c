#include <stdio.h>
#include <string.h>

char    *ft_strcpy(char *dest, char *src)
{
    int     i;

    i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    return (dest);
}

int     main(void)
{
    char a[] = "Hello World";
    char b[] = "Balou is here";

    printf("%s\n", strcpy(b, a));
    printf("%s\n", ft_strcpy(b, a));
    return (0);
}
