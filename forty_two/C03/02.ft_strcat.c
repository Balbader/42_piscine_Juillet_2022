#include <stdio.h>

char	*ft_strcat(char *dest, char *src);
int		ft_strlen(char *str);

int main(void)
{
	char	str1[101] = "Hello ";
	char	str2[101] = "World";
	printf("%s\n", ft_strcat(str2, str1));
	return (0);
}

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		j;
	
	i = ft_strlen(src);
	j = 0;
	while (dest[j])
	{
		src[i] = dest[j];
		j++;
		i++;
	}
	return (src);
}

int		ft_strlen(char *str)
{
	int		i;
	
	i = 0;
	while (str[i])
		i++;
	return (i);
}
