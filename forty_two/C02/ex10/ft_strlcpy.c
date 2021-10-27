#include <stdio.h>

unsigned int	ft_strlen(char *str);
unsigned int	ft_strlcpy(char *dest, char *src, size_t dstsize);

int main(void)
{
	char str1[1000] = "Hello World";
	char str2[1000];
	int	 res;

	res = 0;
	res = ft_strlcpy(str2, str1, 123);
	printf("%d\n", res);
	return (0);
}

unsigned int ft_strlcpy(char *dst, char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize > 0)
	{
		while (src[i] && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
		if (ft_strlen(src) < i)
			return (i);
		return (i);
	}
	return (ft_strlen(src));
}

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
