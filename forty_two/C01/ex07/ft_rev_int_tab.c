#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int main(void)
{
	int size = 10;
	int tab[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int	i;

	i = 0;
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}

	printf("\n");

	ft_rev_int_tab(tab, size);

	i = 0;
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	return (0);
}

void	ft_rev_int_tab(int *tab, int size)
{
	int		temp[size];
	int		i;
	int		j;

	i = 0;
	while (i < size)
		i++;
	j = -1;
	while (j < size)
	{
		temp[j] = tab[i];
		i--;
		j++;
	}
	i = 0;
	while (i < size)
	{
		tab[i] = temp[i];
		i++;
	}
}
