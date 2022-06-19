#include <stdlib.h>
#include <stdio.h>

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
	if (ft_check_char(str[i - 1], split) == 1)
		count--;
	return (count);
}

int *ft_strs_len(char *str, char *split)
{
	int *strs_len;
	int temp_count;
	int i;
	int j;

	strs_len = (int *)malloc(sizeof(int) * ft_count_split(str, split));
	temp_count = 0;
	i = 0;
	j = 0;
	while (str[i])
	{
		temp_count++;
		if (ft_check_char(str[i], split) == 1)
		{
			strs_len[j]	= temp_count - 1;
			j++;
			temp_count = 0;
		}
		i++;
	}
	strs_len[j] = temp_count;
	return (strs_len);
}

char **ft_alloc_mem_to_tab(char *str, char *split)
{
	char	**tab = NULL;
	int		*strs_len;
	int		i;

	strs_len = ft_strs_len(str, split);
	if (!(tab = (char **)malloc(sizeof(char *) * (ft_count_split(str, split)) + 1)))
		return (0);
	i = 0;
	while (i < ft_count_split(str, split))
	{
		tab[i] = (char *)malloc(sizeof(char) * strs_len[i]);
		i++;
	}
	return (tab);
}

char **ft_split(char *str, char *charset)
{
	char	**tab;
	int		i;
	int		j;
	int		k;

	tab = ft_alloc_mem_to_tab(str, charset);
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

int		main(void)
{
	char	*str = "Hello my name is balou";
	char	*split = "aeiou ";
	char	**tab;
	int		i;

	tab = ft_split(str, split);
	i = 0;
	while (i < ft_count_split(str, split))
	{
		printf("%s\n", tab[i]);
		i++;
	}
	return (0);
}
