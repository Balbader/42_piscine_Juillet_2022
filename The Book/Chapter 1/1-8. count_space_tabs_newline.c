#include <stdio.h>

/* Write a program to count blanks, tabs, newlines */

int	main(void)
{
	char	*str;
	int		count;
	int		i;

	str = "Hello World		how		are you today\n";
	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\t' || str[i] == ' ' || str[i] == '\n')
			++count;
		++i;
	}
	str[i] = '\0';
	printf("%d\n", count);
	return (0);
}
