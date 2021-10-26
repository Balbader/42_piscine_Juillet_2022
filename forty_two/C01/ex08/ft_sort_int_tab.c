#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);
void	ft_swap(int *a, int *b);

int main(void)
{
	int		size = 10;
	int		tab[10] = {10, 3, 1, 5, 2, 4, 9, 7, 8, 6};
	int		i;

	ft_sort_int_tab(tab, size);
	i = 0;
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	return (0);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int		i;
	int		j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
				ft_swap(&tab[i], &tab[j]);
			j++;
		}
		i++;
	}
}

void	ft_swap(int *a, int *b)
{
	int		temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
