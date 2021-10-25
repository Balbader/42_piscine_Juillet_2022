#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c);

int	main(void)
{
	printf("%d\n", 3^3);
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
