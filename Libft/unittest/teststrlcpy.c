#include <stdio.h>
#include <string.h>
#include "../ft_strlcpy.c"
#include "../ft_macro.h"

void teststrlcpy()
{
    char arr1[] = "abeceda";
    char arr2[8] = {0};
    size_t size = sizeof(arr2);
    printf("TEST strlcpy: %s - %s, %ld\n", arr1, arr2, size);
    size_t len = ft_strlcpy(arr2, arr1, size);
    printf("TEST strlcpy: %s - %s, %ld\n", arr1, arr2, len);
}
