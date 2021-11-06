#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);
char	*ft_strcpy(int i, char *dest, char *src);
int		ft_strlen(char *str);

int main(void)
{
	char	str[101] = "World Hello Hello world Hello";
	char	needle[101] = "";

	printf("ft_strstr: %s\n", ft_strstr(str, needle));
	printf("strstr: %s\n", strstr(str, needle));

	return (0);
}

/*char	*ft_strstr(char *str, char *to_find)*/
/*{*/
	/*int		i;*/
	/*int		j;*/
	/*int		count;*/

	/*count = 0;*/
	/*i = 0;*/
	/*if (*to_find == '\0')*/
		/*return(str);*/
	/*while (str[i])*/
	/*{*/
		/*j = 0;*/
		/*while (to_find[j])*/
		/*{*/
			/*if (to_find[j] == str[i])*/
				/*count++;*/
			/*j++;*/
		/*}*/
		/*i++;*/
	/*}*/
	/*if (count == 0)*/
		/*return (NULL);*/
	/*printf("%d\n", j);*/
	/*if (count > 0)*/
		/*ft_strcpy(i, to_find, str);*/
	/*return (to_find);*/
/*}*/

char	*ft_strcpy(int i, char *dest, char *src)
{
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		ft_strlen(char *str)
{
	int		i;
	int		j;

	j = 0;
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	if (!to_find[0])
		return (str);
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			j++;
			if (!to_find[j])
				return (str + i);
		}
		i++;
	}
	return (0);
}
