#include <stdio.h>

int	main(void)
{
	int	c;

	c = getchar();
	while (c != EOF)
	{
		c = getchar();
		if (c == '\t')
			printf("\\t\n");
		else if (c == '\b')
			printf("\\b\n");
		else if (c == '\\')
			printf("\\\\\n");
		else
			printf("%c\n", c);
	}
	return (0);
}
