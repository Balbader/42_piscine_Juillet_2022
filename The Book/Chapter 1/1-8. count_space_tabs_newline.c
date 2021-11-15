#include <stdio.h>

/* Write a program to count blanks, tabs, newlines */

int	main(void)
{
	char	*str;
	int		spaces;
	int		tabs;
	int		new_lines;
	int		i;

	str = "Hello World how	are		you today\n";
	spaces = 0;
	tabs = 0;
	new_lines = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\t')
			tabs++;
		if (str[i] == ' ')
			spaces++;
		if (str[i] == '\n')
			new_lines++;
		i++;
	}
	printf("tabs: %d\nnew_lines: %d\nspaces: %d\n", tabs, new_lines, spaces);
	return (0);
}
