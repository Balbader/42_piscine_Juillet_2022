#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);
int		ft_strlen(char *str);

int main(void)
{
	char	str1[101] = " World";
	char	str2[101] = "Hello";
	printf("%s\n", ft_strncat(str2, str1, 9));
	return (0);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;
	
	if (nb < 0)
		return (dest);
	i = ft_strlen(dest);
	j = 0;
	while (j < nb)
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
