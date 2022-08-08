int ft_determine_sign(int i, int *tab, int (*f)(int, int))
{
    if ((*f)(tab[i - 1], tab[i]) < 0)
        return (-1);
    if ((*f)(tab[i - 1], tab[i]) > 0)
        return (1);
    return (0);
}

int ft_is_sort(int *tab, int length, int (*f)(int, int))
{
    int i;
    int sign;
    int cmp;

    i = 1;
    sign = 0;
    while (i < length && !(*f)(tab[i - 1], tab[i]))
        i++;
    if (!sign && i < length)
        sign = ft_determine_sign(i++, tab, (f));
    while (i < length)
    {
        cmp = ft_determine_sign(i, tab, (f));
        if (sign != cmp && cmp)
            return (0);
        i++;
    }
    return (1);
}