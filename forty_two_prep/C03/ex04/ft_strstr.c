char    *ft_strstr(char *str, char *to_find)
{
    unsigned int i;
    unsigned int j;

    i = 0;
    while (str[i])
    {
        j = 0;
        while (str[i] == to_find[j])
        {
            j++;
            if (str[i] != to_find[j])
                return (str + i);
        }
        i++;
    }
    return (0);
}
