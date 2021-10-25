#include <unistd.h>

void	ft_print_combn(int n);
void	ft_putchar(char c);
void	ft_special_char(void);
void 	ft_check_n(int n);


int	main(void)
{
	ft_print_combn(12);
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn(int n)
{
	ft_check_n(n);
}

void 	ft_check_n(int n)
{
	if (n < 0 || n > 9)
		return ;
	if (n == 1)
		ft_putchar('1');
	if (n == 9)
		write(1, "123456789", 9);
}

void	ft_special_char(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}
