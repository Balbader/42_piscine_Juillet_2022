#include <unistd.h>

typedef int		t_bool;
#define TRUE 1
#define FALSE 0

void	ft_putstr_non_printable(char *str);
void	ft_putchar(char c);
void	ft_print_hexa(char c);
t_bool	check_char(char c);

int main(void)
{
	char	str[1000] = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(str);
	return (0);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (check_char(str[i]))
			ft_putchar(str[i]);
		else
			ft_print_hexa(str[i]);
		i++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

t_bool	check_char(char c)
{
	if (c >= 32 && c <= 126)
		return (TRUE);
	return (FALSE);
}

void	ft_print_hexa(char c)
{
	char	base[] = "123456789abcdef";

	ft_putchar('/');
	ft_putchar(base[c / 16]);
	ft_putchar(base[c % 16]);
}
