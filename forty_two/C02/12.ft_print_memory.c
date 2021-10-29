#include <unistd.h>

void	*ft_print_memory(void *addr, unsigned int size);
void	ft_print_base(unsigned char c);
void	ft_print_hexa_str(char *str, unsigned int size);
void	ft_putchar(char c);

int main(void)
{
	char	str[] = "Bonjour les amin";
	ft_print_memory(str, 16);
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_base(unsigned char c)
{
	char	*base;

	base	= "123456789abcdef";
	ft_putchar(base[c / 16]);
	ft_putchar(base[c % 16]);
}

void	ft_print_hexa_str(char *str, unsigned int size)
{
	unsigned int	i;

	i = -1;
	while (++i < size)
	{
		if (!(i % 2))
			ft_putchar(' ');
		ft_print_base(str[i]);
	}
	while (i < 16)
		write(1, "   ", (i++ % 2) ? 2 : 3);
	ft_putchar(' ');
	i = -1;
	while (++i < size)
		ft_putchar(str[i] < ' ' || str[i] == 127 ? '.' : str[i]);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	int				j;

	i = 0;
	while (i < size)
	{
		ft_putchar('0');
		j = 56;
		while ((j -= 8) >= 0)
			ft_print_base((unsigned long int)(addr + i) >> j & 0xff);
		ft_putchar(':');
		ft_print_hexa_str(addr + i, (size - i < 16) ? size - i : 16);
		ft_putchar('\n');
		i += 16;
	}
	return (addr);
}
