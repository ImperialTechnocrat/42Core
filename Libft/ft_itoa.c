
#include <stdlib.h>

char *ft_itoa(int n)
{
    int len;
    long int n_long;
    char *result;
    char *ptr;

    n_long = n;
    len = (n_long <= 0) ? 1 : 0;
    n_long = (n_long < 0) ? -n_long : n_long;
    while (n_long > 0)
    {
        n_long /= 10;
        len++;
    }
    result = (char *)malloc((len + 1) * sizeof(char));
    if (result == NULL)
        return (NULL);
    ptr = result;
    if (n < 0)
        *ptr++ = '-';
    n_long = (n < 0) ? -n : n;
    while (n_long > 0)
    {
        *ptr++ = (n_long % 10) + '0';
        n_long /= 10;
    }
    *ptr = '\0';
    return (result);
}
