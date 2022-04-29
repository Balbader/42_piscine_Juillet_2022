int     ft_strlen(char *str)
{
    unsigned long     i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

char    *ft_strcat(char *dest, char *src)
{
    unsigned int     i;
    unsigned int     j;

    j = ft_strlen(dest);
    i = 0;
    while (src[i])
    {
        dest[j] = src[i];
        i++;
    }
    dest[j] = '\0';
    return (dest);
}
