#include <stdio.h>

int main(void)
{
    int arr[5] = {11, 22, 33};
    int *ptr;

    ptr = arr;
    for(int i = 0; i < 5; i++)
        printf("arr[%d]: %d\n", i, arr[i]);

    printf("\n");

    for(int i = 0; i < 5; i++)
        printf("ptr[%d]: %d\n", i, ptr[i]);

    printf("\n");
    printf("sizeof(arr): %lu\n", sizeof(arr));
    printf("sizeof(ptr): %lu\n", sizeof(ptr));
    printf("sizeof(int): %lu\n", sizeof(int));
    printf("%d\n", *ptr + 1);
    printf("\n");
    printf("address of &arr:    %p\n", &arr + 1);
    printf("address of arr:     %p\n", arr + 1);
    printf("address of &arr[0]: %p\n", &arr[0] + 1);
    printf("\n");
    printf("++*ptr:   %d\n", ++*ptr);
    printf("*++ptr:   %d\n", *++ptr);
    printf("*ptr++:   %d\n", *ptr++);
    printf("(*ptr)++: %d\n", (*ptr)++);
    printf("++*ptr++: %d\n", ++*ptr++);
    printf("*ptr:     %d\n", *ptr);
    return (0);
}
