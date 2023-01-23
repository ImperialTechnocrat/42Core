#include "libft.h"

int count_words(char const *s, char c)
{
    int count = 0;
    int i = 0;

    while (s[i])
    {
        while (s[i] == c)
            i++;
        if (s[i])
            count++;
        while (s[i] && s[i] != c)
            i++;
    }
    return (count);
}

int word_len(char const *s, char c)
{
    int len = 0;

    while (*s && *s != c)
    {
        len++;
        s++;
    }
    return (len);
}

char **ft_split(char const *s, char c)
{
    int i = 0;
    int j = 0;
    int k = 0;
    int word_count = count_words(s, c);
    char **result = (char **)malloc(sizeof(char *) * (word_count + 1));

    if (!result)
        return (NULL);
    while (s[i])
    {
        while (s[i] == c)
            i++;
        if (s[i])
        {
            result[j] = (char *)malloc(sizeof(char) * (word_len(&s[i], c) + 1));
            if (!result[j])
                return (NULL);
            k = 0;
            while (s[i] && s[i] != c)
                result[j][k++] = s[i++];
            result[j][k] = '\0';
            j++;
        }
    }
    result[j] = NULL;
    return (result);
}
