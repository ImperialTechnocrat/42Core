#include "libft.h"

char*	ft_substr(char const *s, unsigned int start, size_t len)
{
	char*	sub;

	if (!s)
		return (NULL);
	if (start > (unsigned int)ft_strlen(s))
		return (NULL);
	if (len > (unsigned int)ft_strlen(s))
		len = ft_strlen(s) - start;
	sub = malloc(len + 1);
	if (sub == NULL)
		return (NULL);
	s = s + start;
	while (len != 0)
		*sub++ = *s++;
	*sub = '\0';
	return (sub - len);
}
