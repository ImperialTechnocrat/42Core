#include "libft.h"

char*	ft_strdup(const char *s)
{
	size_t	len;
	char	*dup;

	len = ft_strlen(s);
	dup = malloc(len + 1);
	if (dup != NULL)
		ft_memcpy(dup, s, len + 1);
	return (dup);
}
