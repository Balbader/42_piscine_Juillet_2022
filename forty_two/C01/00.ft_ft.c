#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr);

int main(void)
{
	int		i;

	i = 8;
	printf("%d\n", i);
	ft_ft(&i);
	printf("%d\n", i);

	return (0);
}

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
