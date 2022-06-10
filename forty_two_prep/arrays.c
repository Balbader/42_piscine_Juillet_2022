#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[] = {'a', 'b', 'c', 'd', 'e'};
	char str2[] = {"abcde"};

	printf("%lu\n", strlen(str));
	printf("sizeof str: %lu\n", sizeof(str));
	printf("%lu\n", strlen(str2));
	printf("sizeof str2: %lu\n", sizeof(str2));
	return (0);
}