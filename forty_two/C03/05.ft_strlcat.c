#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int ft_strlen(char *str);

int main(void)
{
	return (0);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len_tot;

	i = 0;
	j = 0;
	len_tot = ft_strlen(dest) + ft_strlen(src);
	if (!size)
		return (ft_strlen(src) + size);
	while (dest[i])
		i++;
	while (src[j] && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (i < size)
		return (len_tot);
	else
		return (ft_strlen(src) + size);
}

unsigned int ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
