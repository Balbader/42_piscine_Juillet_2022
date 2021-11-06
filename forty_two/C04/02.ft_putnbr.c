#include <unistd.h>

void	ft_putnbr(int nb);
void	ft_putchar(char c);

int main(void)
{
	return (0);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		nb = -nb;
	}
	
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
