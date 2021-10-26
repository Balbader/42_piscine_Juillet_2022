#include <stdio.h>

int		ft_str_is_alpha(char *str);

int main(void)
{
	char	*str = "123123129812983";
	printf("%d\n", ft_str_is_alpha(str));
	return (0);
}

int		ft_str_is_alpha(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

