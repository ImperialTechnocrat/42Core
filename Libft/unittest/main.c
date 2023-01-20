#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "../ft_memset.c"
#include "../ft_isalpha.c"
#include "../ft_bzero.c"
#include "testmemmove.c"
#include "teststrlcpy.c"



int    main(void)
{
    char upletter = 'A';
    char downletter = 'b';
    char number = '9';
    char ascii = '*';
    char tab = '\t';
    char nul = '\0';
    char str1[30] = "Statistika je nuda";
    char arr1[10] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '0'};
    char arr2[10] = {'*', '*', '*', '*', '*', '*', '*', '*', '*', '*'};

    printf("is_alpha - A:%d|*:%d\n", ft_isalpha(upletter), ft_isalpha(ascii));
    printf("is_digit - A:%d|9:%d\n", ft_isalpha(upletter), ft_isalpha(number));
    char str[18] = "Statistika je nuda";
    printf("MEMSET TEST: Original: %s\n", str1);
    ft_memset(str1, ascii, 5);
    printf("MEMSET TEST: New     : %s\n", str1);
    printf("ft_bzero TEST: Original: %s\n", str1);
    ft_bzero(str1, 2);
    printf("ft_bzero TEST: New     : %s\n", str1);
    testmemmove();
    teststrlcpy();



    return (0);
}
