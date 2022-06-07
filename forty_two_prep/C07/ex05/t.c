#include <stdlib.h>

int inside_charset(char str, char *charset)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == str)
			return (1);
		i++;
	}
	return (0);
}

int ft_count_split(char *str, char *charset)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && inside_charset(str[i], charset) == 1)
			i++;
		while (str[i] && inside_charset(str[i], charset) == 0)
			i++;
		count++;
	}
	if (inside_charset(str[i - 1], charset) == 1)
		count--;
	return (count);
}

char **ft_split(char *str, char *charset)
{
	char **tab;
	int i;
	int j;
	int k;

	if (!(tab = malloc(sizeof(char *) * (ft_count_split(str, charset) + 1))))
		return (0);
	i = 0;
	k = 0;
	while (k < ft_count_split(str, charset))
	{
		while (str[i] && inside_charset(str[i], charset) == 1)
			i++;
		j = i;
		while (str[j] && inside_charset(str[j], charset) == 0)
			j++;
		if (!(tab[k] = malloc(sizeof(char) * j)))
			return (0);
		j = 0;
		while (inside_charset(str[i], charset) == 0 && str[i])
			tab[k][j++] = str[i++];
		tab[k++][j] = 0;
	}
	tab[k] = 0;
	return (tab);
}

#include <stdio.h>
int main(void)
{
	char sep[] = "aeiou";
	char str[] = "Hello How Are You";
	char **test;
	int i;
	i = 0;
	test = ft_split(str, sep);
	while (test[i])
	{
		printf("%s\n", test[i]);
		i++;
	}
	return (0);
}