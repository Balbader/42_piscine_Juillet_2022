#include <stdio.h>
#include <unistd.h>
#include <string.h>
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

int main(void)
{
	char *str = "Hello my name is moon";
	char *sep = " ";
	char **tab;
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

	temp_count = 0;
	str_len = 0;
	i = 0;
	while (str[i])
	{

		if (ft_check_char(str[i], sep))
		{
		}
		temp_count++;
		i++;
	}
	return (0);
}