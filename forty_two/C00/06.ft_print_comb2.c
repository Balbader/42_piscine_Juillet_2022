#include <unistd.h>

void	ft_putcharh(char c);
void	ft_special_char(void);
void	ft_print_char(int a, int b);
void	ft_print_comb2(void);

int	main(void)
{
	ft_print_comb2();
	return (0);
}

void	ft_putcharh(char c)
{
	write(1, &c, 1);
}

void	ft_special_char(void)
{
	ft_putcharh(',');
	ft_putcharh(' ');
}

void	ft_print_char(int a, int b)
{
	ft_putcharh(a / 10 + 48);
	ft_putcharh(a % 10 + 48);
	ft_putcharh(' ');
	ft_putcharh(b / 10 + 48);
	ft_putcharh(b % 10 + 48);
}

void	ft_print_comb2(void)
{
	int		a;
	int		b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_print_char(a, b);
			if (a != 98 || b != 99)
				ft_special_char();
			b++;
		}
		a++;
	}
}
