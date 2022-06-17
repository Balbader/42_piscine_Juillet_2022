#include "ft_putchar.c"

void ft_putchar(char c);

void ft_printf_first_line(int x, int i)
{
	if (i == 0)
		ft_putchar('/');
	else if (i == x - 1)
		ft_putchar('\\');
	else if (i > 0 && i < x - 1)
		ft_putchar('*');
}

void ft_printf_last_line(int x, int i)
{
	if (i == 0)
		ft_putchar('\\');
	else if (i == x - 1)
		ft_putchar('/');
	else if (i > 0 && i < x - 1)
		ft_putchar('*');
}

void ft_print_line(int x, int y)
{
	int i;
	int j;

	j = 0;
	while (j < y)
	{
		i = 0;
		while (i < x)
		{
			if (j == 0)
				ft_printf_first_line(x, i);
			else if (j == y - 1)
				ft_printf_last_line(x, i);
			else if (i == 0 || i == x - 1)
				ft_putchar('*');
			else if (i > 0 && i < x - 1)
				ft_putchar(' ');
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}

void rush(int x, int y)
{
	if (x == 0 || y == 0)
		return;
	else if (x == 1 && y == 1)
	{
		ft_putchar('/');
		ft_putchar('\n');
	}
	else
	{
		ft_print_line(x, y);
	}
}