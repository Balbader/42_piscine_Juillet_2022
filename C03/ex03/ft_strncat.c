int     ft_strlen(char *str)
{
    int     i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

char    *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int i;
    unsigned int j;

    j = ft_strlen(dest);
    i = 0;
    while (src[i] && i < nb - 1)
    {
        dest[j] = src[i];
        i++;
    }
    dest[j] = '\0';
    return (dest);
}
