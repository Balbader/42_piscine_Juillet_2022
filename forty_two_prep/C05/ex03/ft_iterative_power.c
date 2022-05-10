#include <stdio.h>

int     ft_iterative_power(int nb, int power)
{
    int     res;

    res = 1;
    if (power < 0)
        return (0);
    if ((nb == 0 && power == 0) || power == 0)
        return (1);
    while (power > 0)
    {
        res *= nb;
        power--;
    }
    return (res);

}

int     main(void)
{
    printf("%d\n", ft_iterative_power(0, 0));
    printf("%d\n", ft_iterative_power(5, 0));
    printf("%d\n", ft_iterative_power(0, 4));
    printf("%d\n", ft_iterative_power(5, -3));
    printf("%d\n", ft_iterative_power(5, 3));
    return (0);
}
