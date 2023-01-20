#include <stdio.h>
#include "../ft_strncmp.c"

void    teststrncmp()
{
    char *string = "Statistika je nuda";
    char *str1 = "Statistika je nuda";
    char *str2 = "Statistika je dobra";

    printf("TESTSTRNCMP: Equal-zero: %d\n", ft_strncmp(string, str1, 15));
    printf("TESTSTRNCMP: NonEqual-nonzero: %d\n", ft_strncmp(string, str2, 15));
}
