#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max)
{
	int *range;
	int i;

	if (min >= max)
		range = NULL;
	range = (int *)malloc(sizeof(int) * (max - min) - 1);
	i = 0;
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}

int main(void)
{
	int *test;

	test = ft_range(0, 10);
	for (int i = 0; i < 10; i++)
		printf("%d\n", test[i]);
	return (0);
}