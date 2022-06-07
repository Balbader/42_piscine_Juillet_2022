#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function to check if character is forbidden */
int ft_is_forbidden(const char *split, char c)
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
int **ft_strs_len(const char *str, const char *split)
{
	int **strs_len;
	int count;
	int i;
	int j;
	int k;

	count = 0;
	i = 0;
	j = 0;
	while (str[i])
	{
		if (!ft_is_forbidden(split, str[i]))
		{
			strs_len[j] = (int *)malloc(sizeof(int) * count);
			strs_len[j][k] = count;
			printf("%d\n", *strs_len[j]);
			j++;
			i++;
			count = 0;
		}
		count++;
		i++;
	}
	return (strs_len);
}

/* Function to store all non forbidden characters */
char *ft_create_stripped_string(const char *str, const char *split)
{
	char *temp;
	int i;
	int j;

	count = 0;
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
	const char str[] = "Hello my name is balou";
	const char split[] = "aeiou";

	ft_strs_len(str, split);
	return (0);
}

// char **ft_split(char *str, char *charset)
// {
// 	char **tab;
// 	char *temp;
// 	return (tab);
// }