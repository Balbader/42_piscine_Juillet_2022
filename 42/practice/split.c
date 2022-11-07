#include <stdlib.h>
#include <stdio.h>

int		ft_check_char(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

int		ft_count_words(char *str)
{
	int i;
	int	count;

	count = 0;
	i = 0;
	while (!ft_check_char(str[i]))
		i++;
	while (str[i])
	{
		if (!ft_check_char(str[i]))
			count++;
		i++;
	}
	return (count);
}

/*
char	**ft_split(char *str)
{
	int	i;
	char **tab;
	while (str[i])
	{
		
	}
}
*/

int	main(void)
{
	//char **tab;
	char *str = "			Hello	my name\nis basil  	\n";

	int	count;

	count = ft_count_words(str);
	printf("%d\n", count);
	return (0);
}
