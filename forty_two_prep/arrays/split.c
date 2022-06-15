#include <stdio.h>
#include <stdlib.h>

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

int main(void)
{
	char *str = "Hello my name is moon";
	char *sep = " ";
	// char **tab;
	int *str_len;		// int tab to store the length of each string
	int temp_count; // variable to temp store the length of each str
	int i;
	int j;

	/*
	1. Define the length of each string based on sep
	2. allocate memory space for each string in **tab
	3. Copy each string to **tab
	3. Print **tab
	*/

	str_len = (int *)malloc((sizeof(int) * ft_count_split(str, sep)));
	temp_count = 0;
	j = 0;
	i = 0;
	while (str[i])
	{
		temp_count++;
		if (ft_check_char(str[i], sep) == 1)
		{
			str_len[j] = temp_count - 1;
			j++;
			temp_count = 0;
		}
		i++;
	}
	str_len[j] = temp_count;

	i = 0;
	while (i < 5)
	{
		printf("str_len[%d]: %d\n", i, str_len[i]);
		i++;
	}
	return (0);
}