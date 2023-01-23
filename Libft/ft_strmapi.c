#include <stdlib.h>
#include "ft_strlen.c"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *result;
    unsigned int i;

    if (s == NULL || f == NULL)
        return (NULL);
    result = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
    if (result == NULL)
        return (NULL);
    i = 0;
    while (s[i])
    {
        result[i] = f(i, s[i]);
        i++;
    }
    result[i] = '\0';
    return (result);
}

