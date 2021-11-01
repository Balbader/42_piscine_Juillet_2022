#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int main(void)
{
	char	str[101] = "Hello World!";
	char	needle[101] = "llo";

	printf("%s\n", ft_strstr(str, needle));

	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	/*
	 If needle is an empty string, haystack is returned; if needle occurs nowhere in
     haystack, NULL is returned; otherwise a pointer to the first character of the first
     occurrence of needle is returned.
	*/
	return (to_find);
}
