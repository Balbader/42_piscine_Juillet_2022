#include <stdio.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
	char	str1[101] = "hello World";
	char	str2[101] = "hello World";
	printf("%d\n", ft_strncmp(str1,	str2, 5));
	return (0);
}

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	char			temp1[101];
	char			temp2[101];

	i = 0;
	while (i < n)
	{
		temp1[i] = s1[i];
		temp2[i] = s2[i];
		printf("i: %d\n", i);
		printf("temp1: %s\n", temp1);
		printf("temp2: %s\n", temp2);
		i++;
	}
	return (*temp1 - *temp2);
}
