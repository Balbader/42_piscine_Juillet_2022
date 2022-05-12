int     ft_is_prime(int nb)
{
    int     i;
    int     count;

    count = 0;
    i = 1;
    while (i <= nb)
    {
        if (nb % i == 0)
            count++;
        i++;
    }
    if (count == 2)
        return (1);
    return (0);
}
