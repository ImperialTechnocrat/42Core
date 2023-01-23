#include <stdio.h>
#include <string.h>
#include "../ft_memmove.c"

void testmemmove()
{
    char arr1[10] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '\0'};
    char arr2[10] = {'*', '*', '*', '*', '*', '*', '*', '*', '*', '\0'};
    char arr3[10] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '\0'};

    printf("TEST MEMMOVE: %s - %s\n", arr1, arr2);
    ft_memmove(arr2, arr1, 10);
    printf("TEST MEMMOVE: %s - %s\n", arr1, arr2);

    printf("TEST MEMMOVE: %s\n", arr3);
    ft_memmove(arr3, &arr3[2], 3);
    printf("TEST MEMMOVE: %s\n", arr3);
}
