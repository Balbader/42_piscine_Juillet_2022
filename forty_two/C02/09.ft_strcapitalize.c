#include <stdio.h>

char	*ft_strcapitalize(char *str);

int main(void)
{
	char str[1000] = "saLut, coMment tu vas ? 42Mots qUarante-deux; cinquante+et+un";
	ft_strcapitalize(str);
	printf("%s\n", str);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int		i;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	i = 1;
	while (str[i])
	{
		if (!((str[i - 1] >= 'A' && str[i - 1] <= 'Z') ||
					(str[i - 1] >= 'a' && str[i - 1] <= 'z') ||
					(str[i - 1] >= '0' && str[i - 1] <= '9')))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
