#include <stdio.h>
#include <stdlib.h>

int ft_count_str_elem(char *str, char *sep)
{
    int i;
    int count;

    count = 0;
    i = 0;
    while (str[i])
    {
        if (str[i] == sep)
            count++;
        i++;
    }
    return (count + 1);
}

int main(void)
{
    char *str = "Hello my name is balou";
    char res[50][50];
    int count;
    int i;
    int j;
    int k;

    i = 0;
    j = 0;
    k = 0;
    while (str[i])
    {
        res[j][k] = str[i];
        k++;
        i++;
        if (str[i] == ' ')
        {
            k = 0;
            j++;
            i++;
        }
    }
    i = 0;
    while (i < 50)
    {
        printf("res[%d]: %s\n", i, res[i]);
        i++;
    }
    return (0);
}
