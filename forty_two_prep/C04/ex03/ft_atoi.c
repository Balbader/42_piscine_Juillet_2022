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
        if (str[i] == '-')
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
    int     res;

    res = 0;
    i = 0;
    while (str[i] != '\0')
    {
        while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
                || str[i] == '\f' || str[i] == '\r' || str[i] == ' '
                || str[i] == '+' || str[i] == '-')
            i++;
        if (ft_check_if_nbr(str[i]))
            res = res * 10 + str[i] - '0';
        else
        {
            if (!ft_count_operators(str))
                res *= -1;
            return (res);
        }
        i++;
    }
    return (0);
}
