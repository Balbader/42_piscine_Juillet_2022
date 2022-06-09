#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int count_sep(char *str, char sep)
{
	int count;
	int i;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == sep)
			count++;
		i++;
	}
	return (count);
}

int main(void)
{
	char *str = " Hello My Name Is Balou ";
	char sep = ' ';
	// char **tab;
	int *sizes;
	int count;
	int sep_nbr;
	int i;
	int j;

	sep_nbr = count_sep(str, sep);
	printf("sep_nbr: %d\n", sep_nbr);
	sizes = (int *)malloc(sizeof(int) * sep_nbr);
	count = 0;
	j = 0;
	i = 0;
	if (str[i] == sep)
		i++;
	while (str[i])
	{
		if (str[i] == sep)
		{
			sizes[j] = count;
			j++;
			i++;
			count = 0;
		}
		count++;
		i++;
	}
	i = 0;
	while (i < 5)
	{
		printf("sizes[%d]: %d\n", i, sizes[i]);
		i++;
	}
	return (0);
}