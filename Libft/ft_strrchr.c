#include "libft.h"

char*	ft_strrchr(const char* s, int c)
{
	const char*	last;
	size_t		len;

	len = ft_strlen(s);
	last = NULL;
	while (len--)
	{
		if (s[len] == c)
		{
			last = s + len;
			break;
		}
	}
	return ((char*)last);
}
