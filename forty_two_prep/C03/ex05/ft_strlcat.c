unsigned int    ft_strlen(char *str)
{
    int     i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

unsigned int    ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int    i;
    unsigned int    j;
    unsigned int    length;

    i = 0;
    j = 0;
    while (i < size - 1 && src[i] )
    {
        dest[j] = src[i];
        i++;
        j++;
    }
    dest[j] = '\0';
    i = 0;
    while (dest[i])
        i++;
    length = i + ft_strlen(src);
    return (length);
}
