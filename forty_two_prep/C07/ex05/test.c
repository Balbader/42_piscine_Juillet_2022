#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function to check if character is forbidden */
int ft_is_forbidden(char *split, char c)
{
	int i;

	i = 0;
	while (split[i])
	{
		if (c == split[i])
			return (0);
		i++;
	}
	return (1);
}

/* Function that defines the length of every string between 2 seperator */

/* Function to store all non forbidden characters */
char *ft_create_stripped_string(char *str, char *split)
{
	char *temp;
	int i;
	int j;

	temp = (char *)malloc(sizeof(char));
	i = 0;
	j = 0;
	while (str[i])
	{
		if (!(ft_is_forbidden(split, str[i])))
			i++;
		temp[j] = str[i];
		i++;
		j++;
	}
	temp[j] = '\0';
	return (temp);
}

int main(void)
{
	char str[] = "Hello my name is balou";
	char split[] = "aeiou";

	printf("%s\n", ft_create_stripped_string(str, split));
	return (0);
}

// char **ft_split(char *str, char *charset)
// {
// 	char **tab;
// 	return (tab);
// }