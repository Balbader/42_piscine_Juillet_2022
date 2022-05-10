#include <stdio.h>

int     ft_recursive_power(int nb, int power)
{
    if (power < 0)
        return (0);
    if ((nb == 0 && power == 0) || power == 0)
        return (1);

}

int     main(void)
{
    printf("%d\n", ft_recursive_power(0, 0));
    printf("%d\n", ft_recursive_power(5, 0));
    printf("%d\n", ft_recursive_power(0, 4));
    printf("%d\n", ft_recursive_power(5, -3));
    printf("%d\n", ft_recursive_power(5, 3));
    return (0);
}
