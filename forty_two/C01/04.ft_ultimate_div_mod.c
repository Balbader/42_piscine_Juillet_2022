#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
	int a = 9;
	int b = 3;

	ft_ultimate_div_mod(&a, &b);
	printf("%d\n", a);
	printf("%d\n", b);
	return (0);
}

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		div;
	int		mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
