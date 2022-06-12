#include <stdio.h>

int main(void)
{
	char *tab[] = {"Hello", "My", "Name", "Is", "Balou"};
	char *str = "aeiou";
	int size;
	int i;

	size = sizeof(tab) / sizeof(tab[0]);
	i = 0;
	while (i < size)
	{
		printf("%s\n", tab[i]);
		i++;
	}
	return (0);
}