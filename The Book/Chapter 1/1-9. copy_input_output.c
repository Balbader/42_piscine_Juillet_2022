#include <stdio.h>

int	main(void)
{
	int	c;
	int	last;

	last = 'a';
	while ((c = getchar()) != EOF)
	{
		if (c != ' ')
			putchar(c);
		if (c == ' ')
		{
			if (last != ' ')
				putchar(c);
			last = c;
		}
	}
	return (0);
}
