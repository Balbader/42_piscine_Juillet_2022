#include <stdio.h>
#include <stdlib.h>

/* Compare each character to split to find split in str */
int ft_check_char(char c, char *split)
{
	int i;

	i = 0;
	while (split[i])
	{
		if (c == split[i])
			return (1);
		i++;
	}
	return (0);
}

/* Count total occurrences of split in str */
int ft_count_split(char *str, char *split)
{
	int count;
	int i;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && ft_check_char(str[i], split) == 1)
			i++;
		while (str[i] && ft_check_char(str[i], split) == 0)
			i++;
		count++;
	}
	if (ft_check_char(str[i] - 1, split) == 1)
		count--;
	return (count);
}

/* Define the length of each string based on sep */
int *ft_str_len(char *str, char *split)
{
	int *str_len;		// int tab to store the length of each string
	int temp_count; // variable to temp store the length of each str
	int i;
	int j;

	str_len = (int *)malloc((sizeof(int) * ft_count_split(str, split)));
	temp_count = 0;
	j = 0;
	i = 0;
	while (str[i])
	{
		temp_count++;
		if (ft_check_char(str[i], split) == 1)
		{
			str_len[j] = temp_count - 1;
			j++;
			temp_count = 0;
		}
		i++;
	}
	str_len[j] = temp_count;
	return (str_len);
}

int main(void)
{
	char *str = "Hello my name is moon";
	char *split = " ";
	int *str_len;
	int i;
	// char **tab;

	str_len = ft_str_len(str, split);
	i = 0;
	while (i < 5)
	{
		printf("str_len[%d]: %d\n", i, str_len[i]);
		i++;
	}
	return (0);
}

/*
1. Define the length of each string based on sep = ok
2. allocate memory space for each string in **tab
3. Copy each string to **tab
3. Print **tab
*/