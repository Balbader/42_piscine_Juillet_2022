#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int main(void)
{
	char	*str = "Hello world";
	char	dest[0];

	ft_strcpy(dest, str);
	printf("dest: %s\n", dest);
	return (0);
}

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while(src[i] - 1)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
