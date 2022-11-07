#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_check_char(char c, char *temp)
{
	int	i;

	i = 0;
	while (temp[i])
	{
		if (c == temp[i])
			return (1);
		i++;
	}
	return (0);
}

void	ft_inter(char *s1, char *s2)
{
	int 	i;
	int		j;
	int		k;
	char	temp[1000] = {0};

	k = 0;
	i = 0;
	while (s1[i])
	{
		if (!ft_check_char(s1[i], temp))
		{
			temp[k] = s1[i];
			ft_putchar(s1[i]);
			k++;
		}
		i++;
	}
	i = 0;
	while (s2[i])
	{
		if (!ft_check_char(s2[i], temp))

		{
			temp[k] = s2[i];
			ft_putchar(s2[i]);
			k++;
		}
		i++;
	}
	temp[k] = '\0';
}

int	main(int ac, char **av)
{
	if (ac != 3)
		ft_putchar('\n');
	ft_inter(av[1], av[2]);
	return (0);
}
