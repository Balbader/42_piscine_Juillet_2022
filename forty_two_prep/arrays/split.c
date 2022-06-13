#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int ft_check_char(char *split, char c)
{
	int i;

	i = 0;
	while (split[i])
	{
		if (c == split[i])
			return (1);
	}
	return (0);
}

int ft_count_split(char *str, char *split)
{
	int split_count;
	int i;
	int j;

	split_count = 0;
	i = 0;
	while (split[i])
	{
		j = 0;
		while (str[j])
		{
			if ()
		}
		i++;
	}
}

int main(void)
{
	char *str = "Hello My Name Is Moon";
	char *sep = " ";
	char **tab;
	int i;
	int j;

	i = 0;
	return (0);
}