#include <stdio.h>
#include <stdlib.h>

// 1. Pass all white space
// 2. Pass all + signs
// 3. Count all (-). If count is even returned int will be positive.
//    If odd returned int will be negative.
// 4. Int will be base 10: 0123456789
// 5. The returned int should only store all possible values 
//    of int: [−2,147,483,647, +2,147,483,647] range.

int     ft_check_if_nbr(char c)
{
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}

int     ft_count_operators(char *str)
{
    int     i;
    int     count;

    count = 0;
    i = 0;
    while (str[i])
    {
        if (str[i] != '-')
            i++;
        else
            count += 1;
        i++;
    }
    if (count % 2 == 0)
        return (1);
    return (0);
}

int     ft_atoi(char *str)
{
    int     i;
    int     j;
    int     res;

    res = 0;
    i = 0;
    if (!(str[i] >= '0' && str[i] <= '9'))
        return (0);
    while (str[i])
    {
        j = i + 1;
        if ((ft_check_if_nbr(str[i])) && (ft_check_if_nbr(str[j])))
            res = res * 10 + str[i] - '0';
        i++;
    }
    return (res);
}

int     main(void)
{
    int     sys;
    int     me;
    char    str[] = "123ase75";

    sys = atoi(str);
    me = ft_atoi(str);
    printf("str = %s\n", str);
    printf("sys: %d\n", sys);
    printf("me: %d\n", me);
    return (0);
}
