#include <stdlib.h>
#include <stdio.h>

int	ft_nb_len(int nbr)
{
	int	i;

	i = 1;
	if (nbr < 0)
	{
		i++;
		nbr *= -1;
	}
	while (nbr > 9)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

int	ft_div(int len)
{
	int	i;

	i = 1;
	if (len == 1)
		return (1);
	while (len > 1)
	{
		i *= 10;
		len--;
	}
	return (i);
}

char	*ft_itoa(int nbr)
{
	int		i;
	int		len;
	int		len2;
	char	*res;

	i = 0;
	len = ft_nb_len(nbr);
	len2 = len;
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (0);
	res[0] = '\0';
	if (nbr == -2147483648)
		return ("-2147483648\0");
	if (nbr < 0)
	{
		nbr *= -1;
		res[0] = '-';
		len--;
		i++;
	}
	while (i < len2)
	{
		res[i] = ((nbr / (ft_div(len))) % 10 ) + '0';
		len--;
		i++;
	}
	res[i] = '\0';
	return (res);
}

int		main(void)
{
	printf("%s\n", ft_itoa(2147483648));
	printf("%s\n", ft_itoa(2147483647));
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(-2147483647));

	return (0);
}
