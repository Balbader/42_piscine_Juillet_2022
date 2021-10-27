#include <stdio.h>

char	*ft_strcat(char *dest, char *src);
int		ft_strlen(char *str);

int main(void)
{
	char	str1[101] = " World";
	char	str2[101] = "Hello";
	printf("%s\n", ft_strcat(str2, str1));
	return (0);
}

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		j;
	
	i = ft_strlen(dest);
	j = 0;
	while (dest[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest);
}

int		ft_strlen(char *str)
{
	int		i;
	
	i = 0;
	while (str[i])
		i++;
	return (i);
}
