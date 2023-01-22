#include "ft_macro.h"
#include "ft_strlcpy.c"
#include "ft_strlen.c"
#include "ft_strchr.c"
#include "stdlib.h"

char	*ft_strtrim(char const *s1, char const *set)
{
    int	start;
    int	end;
    int	len;
    char	*result;

    if (s1 == NULL || set == NULL)
        return NULL;

    start = 0;
    end = ft_strlen(s1) - 1;

    while (start <= end && ft_strchr(set, s1[start]) != NULL)
        start++;

    while (end > start && ft_strchr(set, s1[end]) != NULL)
        end--;

    len = end - start + 1;
    result = (char *)malloc(len + 1);
    if (result == NULL)
        return NULL;

    ft_strlcpy(result, s1 + start, len);
    result[len] = '\0';

    return result;
}
