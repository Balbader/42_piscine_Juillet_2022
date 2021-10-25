#include <unistd.h>

void	ft_putnbr(int nb);
void	ft_putchar(char c);

int main(void)
{
	ft_putnbr(-42);
	return (0);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else if (nb <= 9)
		ft_putchar(nb + '0');
	else
	{
		ft_putnbr(nb / 10);
		ft_putchar('0' + (nb % 10));
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
