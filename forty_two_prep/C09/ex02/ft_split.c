#include <stdio.h>
#include <stdlib.h>

/* Compare string character and seperator */
int ft_is_sep(char c, char *split)
{
	int i;

	i = 0;
	while (split[i])
	{
		if (split[i] == c)
			return (1);
		i++;
	}
	return (0);
}

/* Count the total number of occurences of seperator in string */
int ft_count_split(char *str, char *split)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && ft_is_sep(str[i], split) == 1)
			i++;
		while (str[i] && ft_is_sep(str[i], split) == 0)
			i++;
		count++;
	}
	if (ft_is_sep(str[i - 1], split) == 1)
		count--;
	return (count);
}

char **ft_split(char *str, char *charset)
{
	char **tab;
	int i;
	int j;
	int k;

	/* If not enough space return 0 */
	if (!(tab = malloc(sizeof(char *) * (ft_count_split(str, charset) + 1))))
		return (0);

	i = 0;
	k = 0;
	while (k < ft_count_split(str, charset))
	{
		while (str[i] && ft_is_sep(str[i], charset) == 1)
			i++;
		j = i;
		while (str[j] && ft_is_sep(str[j], charset) == 0)
			j++;

		/* If not enough space return 0 */
		if (!(tab[k] = malloc(sizeof(char) * j)))
			return (0);

		j = 0;
		while (ft_is_sep(str[i], charset) == 0 && str[i])
			tab[k][j++] = str[i++];
		tab[k++][j] = 0;
	}
	tab[k] = 0;
	return (tab);
}

int main(void)
{
	char *str = "Hello my name is balou";
	char *split = " aeiou";
	char **test;
	int i;

	i = 0;
	test = ft_split(str, split);
	while (test[i])
	{
		printf("%s\n", test[i]);
		i++;
	}
	return (0);
}
