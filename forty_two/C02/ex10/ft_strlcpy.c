#include <stdio.h>

unsigned int ft_strlcpy(char *dest, const char *src, size_t dstsize);

int main(void)
{
	char str1[1000] = "Hello World";
	char str2[1000];
	int	 res;

	res = 0;
	res = ft_strlcpy(str2, str1, 4);
	printf("%d\n", res);
	return (0);
}

unsigned int ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	if (!dst || !src)
		return (0);
	i = 0;
	while (src[i])
		i++;
	if (dstsize == 0)
		return (i);
	i = 0;
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	i = 0;
	while (src[i])
		i++;
	return (i);
}
