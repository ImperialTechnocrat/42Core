#include <stdio.h>
#include "../ft_strchr.c"
#include "../ft_strrchr.c"

void    teststrchr()
{
    char arr1[] = "abeceda";
    char character = 'e';

    printf("Find: %s\n", ft_strchr(arr1, character));
    printf("Find: %s\n", ft_strrchr(arr1, character));

}
