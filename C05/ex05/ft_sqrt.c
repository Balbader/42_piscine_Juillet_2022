int     ft_sqrt(int nb)
{
    int     res;
    int     i;

    i = 0;
    res = 0;
    while (i < nb)
    {
        if (res == nb)
            return (i - 1);
        else
            res = i * i;
        i++;
    }
    return (0);
}
