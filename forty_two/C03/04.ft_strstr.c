#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);
char	*ft_strcpy(char *dest, char *src);
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
	if (*to_find == '\0')
		return(str);
	return (to_find);
}

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
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
