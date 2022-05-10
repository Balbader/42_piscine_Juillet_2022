int     ft_iterative_factorial(int nb)
{
    int     res;
    int     i;

    i = 1;
    res = 1;
    if (nb < 0 || nb != sizeof(int))
        return (0);
    while (i <= nb)
    {
        res *= i;
        i++;
    }
    return (res);
}
