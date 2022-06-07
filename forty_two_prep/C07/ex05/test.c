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

int main(void)
{
	const char *str = "Hello my name is balou";
	const char *split = "aeiou";
	char **tab;

	char temp[50];
	int i;
	int j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (split[j])
		{

			j++;
		}
		i++;
	}

	return (0);
}
