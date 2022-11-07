#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(char *str)
{
	int i;
	int sign;
	int res;

	res = 0;
	sign = 1;
	i = 0;
	while (str[i] <= 32 && str[i] != '\0')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * sign);
}


int	main(int ac, char **av)
{
	(void)ac;
	printf("%d\n", ft_atoi(av[1]));
	printf("%d\n", atoi(av[1]));
	return (0);
}

