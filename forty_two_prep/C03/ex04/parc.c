#include <stdio.h>

unsigned int     ft_strlen(char *str)
{
    unsigned int     i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

char    *find(char *str, char *needle)
{
    unsigned int    str_index;
    unsigned int    needle_index;
    char            letter;
    char            needle_letter;

    str_index = 0;
    needle_index = 0;
    while (str_index < ft_strlen(str))
    {
        letter = str[str_index];
        needle_letter = needle[needle_index];
        if (letter == needle_letter)
        {
            needle_index++;
            if (needle_index == ft_strlen(needle))
                return (&str[str_index - ft_strlen(needle) + 1]);
        }
        else
            needle_index = 0;
        str_index++;
    }
    return (0);
}


int     main(void)
{
    char a[] = "abcdefgh";
    char b[] = "cd";

    printf("%s\n", find(a, b));
    return (0);
}
