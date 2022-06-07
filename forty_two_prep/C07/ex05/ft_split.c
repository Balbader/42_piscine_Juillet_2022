#include <stdio.h>
#include <stdlib.h>

// The Idea:
// Create an 2d array that will take in every segment of the string the is
// preceded and followed by any character within the *split string.

// Steps:
// 1. Run through the main string and COPY to temp every character encountered
// 2. As soon as you encounter a seperator character,
//  	all characters saved in temp will constitute the string to be saved
// 3. Reset temp to 0
// 4. Start running through the main string from
//    the last seperator character encountered
// 5. Repeat 1 => 4 till there is no more seperator characters encountered

int ft_is_sep(char *split)
{
}

char *ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char **ft_split(char *str, char *charset)
{
	char **tab;
	return (tab);
}

int main(void)
{
	const char *str = "Hello my name is balou";
	const char *split = "aeiou";

	return (0);
}
