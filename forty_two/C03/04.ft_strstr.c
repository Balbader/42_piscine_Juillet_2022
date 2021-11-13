#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int main(void)
{
	char	str[101] = "World Hello Hello world Hello";
	char	needle[101] = "ld";

	printf("ft_strstr: %s\n", ft_strstr(str, needle));
	printf("strstr: %s\n", strstr(str, needle));

	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	if (!to_find[0])
		return (str);
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			j++;
			if (!to_find[j])
				return (str + i);
		}
		i++;
	}
	return (0);
}
