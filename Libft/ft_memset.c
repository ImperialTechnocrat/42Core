#ifndef FT_MEMSET
#define FT_MEMSET

#include "ft_macro.h"

void*	ft_memset(void* ptr, int value, size_t num)
{
	unsigned char*	p;

	p = ptr;
	while (num--)
		*p++ = (unsigned char) value;
	return ptr;
}

#endif
