#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int     main(void)
{
    int val;
    char strn1[] = "12546";

    val = atoi(strn1);
    printf("String value = %s\n", strn1);
    printf("Integer value = %d\n", val);

    char strn2[] = "abcd123GeeksforGeeks";
    val = atoi(strn2);
    printf("String value = %s\n", strn2);
    printf("Integer value = %d\n", val);

    char strn3[] = "123GeeksforGeeks";
    val = atoi(strn3);
    printf("String value = %s\n", strn3);
    printf("Integer value = %d\n", val);
    return (0);
}