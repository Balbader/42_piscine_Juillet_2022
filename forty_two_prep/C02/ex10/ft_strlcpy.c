#include <stdio.h>
#include <string.h>

//unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size)

int     main(void)
{
    char            src[] = "World";
    char            dst[] = "";
    size_t          size;
    int    res;

    size = 3;
    res = strlcpy(dst, src, size);
    printf("%u\n", res);
    return (0);
}
