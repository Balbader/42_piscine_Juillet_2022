#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char *ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char *ft_strdup(char *str)
{
	char *duplicate;
	int str_len;

	str_len = ft_strlen(str);
	duplicate = (char *)malloc(sizeof(char) * str_len);
	ft_strcpy(duplicate, str);
	return (duplicate);
}

int main(void)
{
	char *s1 = "Hello World!";
	printf("%s\n", ft_strdup(s1));
	return (0);
}