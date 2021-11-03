#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);
int		ft_strlen(char *str);

int main(void)
{
	char	str[101] = "World Hello Hello world Hello";
	char	needle[101] = "Hello";

	printf("%s\n", ft_strstr(str, needle));
	printf("%s\n", strstr(str, needle));

	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	char	temp[101];
	int		len;
	int		i;
	int		j;

	if (*to_find == '\0')
		return(str);
	len = ft_strlen(to_find);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (to_find[j])
		{
			if (to_find[j] == str[i])
				temp[j] = to_find[j];
			j++;
		}
		i++;
	}
	temp[j] = '\0';
	return (to_find);
}

int		ft_strlen(char *str)
{
	int		i;
	int		j;

	j = 0;
	i = 0;
	while (str[i])
		i++;
	return (i);
}
