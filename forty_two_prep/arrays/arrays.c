#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char *tab[] = {"Hello", "My", "Name", "Is", "Balou"};
	char **res;
	// char *str = "aeiou";
	int tab_size;
	int res_size;
	int i;
	int j;

	tab_size = sizeof(tab) / sizeof(tab[0]);
	printf("tab_size: %d\n", tab_size);
	res = malloc(sizeof(char *) * tab_size);
	i = 0;
	while (i < tab_size)
	{
		res[i] = malloc(sizeof(char) * strlen(tab[i]));
		strcpy(res[i], tab[i]);
		printf("res[i]: %s\n", res[i]);
		i++;
	}

	res_size = sizeof(res) / sizeof(res[0]);
	printf("res_size: %d\n", res_size);
	j = 0;
	while (j < tab_size)
	{
		printf("res[j]: %s\n", res[j]);
		j++;
	}
	return (0);
}