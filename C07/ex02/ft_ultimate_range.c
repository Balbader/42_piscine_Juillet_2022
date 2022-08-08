#include <stdlib.h>
#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (!(*range = (int *)malloc(sizeof(int) * (max - min) - 1)))
		return (-1);
	i = 0;
	while (i < (max - min))
	{
		*range[i] = min;
		min++;
		i++;
	}
	return (max - min);
}
