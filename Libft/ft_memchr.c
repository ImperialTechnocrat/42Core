#include "libft.h"

void*	memchr(const void* s, int c, size_t n)
{
	const unsigned char	*p;

	p = s;
	while (n--)
	{
		if (*p == (unsigned char)c)
			return ((void*)p);
		++p;
	}
	return NULL;
}
