#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
The Idea:

Create an 2d array that will take in every segment of the string the is
preceded and followed by any character within the *split string.

Steps:

1. Run through the main string and COPY to temp every character encountered

2. As soon as you encounter a seperator character,
	all characters saved in temp will constitute the string to be saved

3. Reset temp to 0

4. Start running through the main string from
	 the last seperator character encountered

5. Repeat 1 => 4 till there is no more seperator characters encountered
*/

int is_char_sep(const char *split, char c)
{
	int i;

	i = 0;
	while (split[i])
	{
		if (c == split[i])
			return (0);
		i++;
	}
	return (1);
}

int main(void)
{
	const char str[] = "Hello my name is balou";
	const char split[] = "aeiou";
	char temp[250];

	int i;
	int j;

	printf("Split: %s\n", split);
	printf("Str:   %s\n", str);

	i = 0;
	j = 0;
	while (str[i])
	{
		if (!(is_char_sep(split, str[i])))
			i++;
		temp[j] = str[i];
		i++;
		j++;
	}
	printf("Temp:  %s\n", temp);
	return (0);
}
