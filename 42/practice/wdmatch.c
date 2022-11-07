#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
}

int		main(int ac, char **av)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	if (ac == 3)
	{
		while (av[2][i])
		{
			if (av[1][j] == '\0')
			{
				ft_putstr(av[1]);
				ft_putchar('\n');
				return (0);
			}
			if (av[2][i] == av[1][j])
				j++;
			i++;
		}
		if (av[1][j] == '\0')
			ft_putstr(av[1]);
	}
	ft_putchar('\n');
	return (0);
}

