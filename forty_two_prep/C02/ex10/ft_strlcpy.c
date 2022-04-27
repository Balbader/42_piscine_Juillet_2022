#include <stdio.h>
#include <bsd/string.h>

//unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size)

void test(int size)
{
    char string[] = "Hello there, Venus";
    char buffer[19];
    int r;

    r = strlcpy(buffer,string,size);

    printf("Copied '%s' into '%s', length %d\n",
            string,
            buffer,
            r
          );
}

int     main(void)
{
    test(19);
    test(10);
    test(1);
    test(0);
    return (0);
}
