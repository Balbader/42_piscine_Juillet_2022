#include <stdlib.h>
#include <stdio.h>

char *ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	j = 0;
	while (dest[j])
		j++;
	i = 0;
	while (src[i])
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
}

int main(void)
{
	char *src = " my name is Balou.";
	char dest[50] = "Hello,";
	printf("%s\n", ft_strcat(dest, src));
	return (0);
}