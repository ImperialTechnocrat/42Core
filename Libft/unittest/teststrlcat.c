#include <stdio.h>
#include <string.h>
#include "../ft_strlcat.c"
#include "../ft_macro.h"

void teststrlcat()
{
    char arr1[] = "abeceda";
    char arr2[8] = "je to";
    size_t size = sizeof(arr2);
    printf("TEST ft_strlcat: %s - %s, %ld\n", arr1, arr2, size);
    size_t len = ft_strlcat(arr2, arr1, size);
    printf("TEST ft_strlcat: %s - %s, %ld\n", arr1, arr2, len);
}
