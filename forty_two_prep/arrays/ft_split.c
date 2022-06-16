#include <stdio.h>
#include <stdlib.h>

/* compare a given char with *split characters k*/
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

/* count tot occurrences of *split characters in *str in order
	to know the total numbers of strings to be stocked in final **tab */
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
	if (ft_check_char(str[i - 1], split) == 1)
		count--;
	return (count);
}

/* Create an arr of int that holds the length of each string that will
	 be stocked in final **tab */
int *ft_str_len(char *str, char *split)
{
	int *str_len;
	int temp_count;
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

/* Allocate sufficient memory space in **tab to be
	 able to receive each string */
char **alloc_mem_to_tab(char *str, char *charset)
{
	char **tab;
	int *strs_len;
	int i;

	strs_len = ft_str_len(str, charset);
	if (!(tab = (char **)malloc(sizeof(char *) * (ft_count_split(str, charset)) + 1)))
		return (0);
	i = 0;
	while (i < ft_count_split(str, charset))
	{
		tab[i] = (char *)malloc(sizeof(char) * strs_len[i]);
		i++;
	}
	return (tab);
}

/* Split *str into individual strings */
char **ft_split(char *str, char *charset)
{
	char **tab;
	int i;
	int j;
	int k;

	tab = alloc_mem_to_tab(str, charset);
	k = 0;
	i = 0;
	while (k < ft_count_split(str, charset))
	{
		while (str[i] && ft_check_char(str[i], charset) == 1)
			i++;
		j = 0;
		while (ft_check_char(str[i], charset) == 0 && str[i])
		{
			tab[k][j] = str[i];
			j++;
			i++;
		}
		k++;
	}
	tab[k] = 0;
	return (tab);
}

int main(void)
{
	char *str = "H/e/l/l/o/m/y/n/a/m/e-i-s-b/-a////l---ou";
	char *split = "/-";
	char **tab;
	int i;

	tab = ft_split(str, split);
	i = 0;
	while (i < ft_count_split(str, split))
	{
		printf("tab[%d]: %s\n", i, tab[i]);
		i++;
	}
	return (0);
}
