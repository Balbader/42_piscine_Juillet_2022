void    ft_to_lwr(char *c)
{
    if (*c >= 'A' && *c <= 'Z')
        *c += 32;
}

void    ft_to_upr(char *c)
{
    if (*c >= 'a' && *c <= 'z')
        *c -= 32;
}

int     ft_check_non_alpha(char *c)
{
    if ((*c >= 'a' && *c <= 'z')
            || (*c >= 'A' && *c <= 'Z')
            || (*c >= '0' && *c <= '9'))
        return (0);
    return (1);
}

char    *ft_strcapitalize(char *str)
{
    int     i;

    i = 0;
    if (str[i] >= 'a' && str[i] <= 'z')
        ft_to_upr(&str[i]);
    while (str[i] != '\0')
    {
        if (ft_check_non_alpha(&str[i - 1]) && !ft_check_non_alpha(&str[i]))
            ft_to_upr(&str[i]);
        i++;
    }
    return (str);
}
