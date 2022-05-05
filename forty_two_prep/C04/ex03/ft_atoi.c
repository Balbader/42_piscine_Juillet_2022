#include <stdio.h>
#include <stdlib.h>

// 1. Delete all white space
// 2. Delete all + signs
// 3. Count all (-). If count is even returned int will be positive. If odd returned int will be negative.
// 4. Int will be base 10: 0123456789
// 5. The returned int should only store all possible values of int: [−2,147,483,647, +2,147,483,647] range.



int     ft_atoi(char *str)
{
    int     i;

    i = 0;
    while (str[i])
    {
        if (str[i] == ' ')
            i++;

        i++;
    }
}

int     main(void)
{
    int     sys;
    int     me;
    char    str[] = "12345";

    sys = atoi(str);
    me = ft_atoi(str);
    printf("str = %s\n", str);
    printf("sys: %d\n", sys);
    printf("me: %d\n", me);
    return (0);
}
