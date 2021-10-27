#include <stdio.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
	char	str1[101] = "hello World";
	char	str2[101] = "hello World";
	printf("%d\n", ft_strncmp(str1,	str2, 2));
	return (0);
}

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	char			temp1[101];
	char			temp2[101];

	if (n == 0)
		return (0);
	i = 0;
	while (*s1 == *s2 && i < n - 1)
	{
		temp1[i] = s1[i];
		temp2[i] = s2[i];
		i++;
	}
	return (*temp1 - *temp2);
}

