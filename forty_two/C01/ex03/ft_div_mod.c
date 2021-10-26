#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int main(void)
{
	int	a = 9;
	int b = 3;
	int div;
	int mod;

	ft_div_mod(a,b, &div, &mod);
	printf("%d\n", div);
	printf("%d\n", mod);
	return (0);
}
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
