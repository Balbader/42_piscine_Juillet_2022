#include <stdio.h>

int	main(void)
{
	int	c;
	int	last;

	last = 'a';
	while (c != EOF)
	{
		c = getchar();
		if (c != ' ')
			putchar(c);
		if (c == ' ')
			if (last != ' ')
				putchar(c);
		last = c;
	}
	return (0);
}
