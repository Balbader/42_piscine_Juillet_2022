#include <stdlib.h>
#include <stdio.h>

int	ft_get_range(int start, int end)
{
	int	i;
	int	range;

	range = 0;
	i = 0;
	if (end < start)
	{
		i = start;
		while (i > end)
		{
			range++;
			i--;
		}
	}
	else if (start < end)
	{
		while (start < end)
		{
			range++;
			start++;
		}
	}
	return (range);
}

int	*ft_range(int start, int end)
{
	int		i;
	int		range;
	int		*tab;

	range = ft_get_range(start, end);
	tab = (int *)malloc(sizeof(int) * (range + 1));
	if (!tab)
		return (0);
	if (start == 0 && end == 0)
		return (tab);
	i = 0;
	while (i <= range)
	{
		tab[i] = start;
		i++;
		if (start < end)
			start++;
		else
			start--;
	}
	tab[i] = 0;
	return (tab);
}

int		main(void)
{
	int	*tab;
	int	start = -5;
	int	end = 0;
	int	range = ft_get_range(start, end);
	printf("range: %d\n", range);
	int	i;

	tab = ft_range(start, end);
	i = 0;
	while (i <= range)
	{
		printf("tab[%d]: %d\n", i, tab[i]);
		i++;
	}
	return (0);
}
