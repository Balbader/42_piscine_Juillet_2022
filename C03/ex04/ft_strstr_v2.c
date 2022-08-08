unsigned int     ft_strlen(char *str)
{
    unsigned int     i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

char    *ft_strstr(char *str, char *to_find)
{
    unsigned int    i;
    unsigned int    j;

    i = 0;
    j = 0;
    while (i < ft_strlen(str))
    {
        if (str[i] == to_find[j])
        {
            j++;
            if (j == ft_strlen(to_find))
                return (&str[i - ft_strlen(to_find) + 1]);
        }
        else
            j = 0;
        i++;
    }
    return (0);
}
