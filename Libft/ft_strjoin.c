#include "ft_macro.h"
#include "ft_strlen.c"
#include "ft_strlcpy.c"
#include "ft_strlcat.c"
#include "stdlib.h"


char	*ft_strjoin(char const *s1, char const *s2)
{
	char*	result;
	size_t	len1;
	size_t	len2;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	result = (char*)malloc(len1 + len2 + 1);
	if (result == NULL)
		return (NULL);
	ft_strlcpy(result, s1, len1 + 1);
	ft_strlcat(result, s2, len1 + len2 + 1);
	return (result);
}
