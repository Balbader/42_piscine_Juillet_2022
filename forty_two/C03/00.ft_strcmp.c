#include <stdio.h>

int		ft_strcmp(unsigned char *s1, unsigned char *s2);

int main(void)
{
	unsigned char str1[101] = "hello world";
	unsigned char str2[101] = "hello world";
	printf("%d\n", ft_strcmp(str1, str2));
	return (0);
}

int		ft_strcmp(unsigned char *s1, unsigned char *s2)
{
	return (*s1 - *s2);
}
