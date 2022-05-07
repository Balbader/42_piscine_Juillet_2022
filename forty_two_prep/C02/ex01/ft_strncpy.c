char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    i = 0;
    while (i < n)
    {
        dest[i] = src[i];
        i++;
    }
    if (dest[i] != '\0')
        dest[i] = '\0';
    return (dest);
}
