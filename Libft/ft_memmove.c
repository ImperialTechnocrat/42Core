#include "ft_macro.h"
#include <stdlib.h>

void*	ft_memmove(void* dest, const void* src, size_t n)
{
	char*	d;
	const char*	s;
	char*	temp;
	size_t	i;

	d = (char*)dest;
	s = (const char*)src;
	temp = (char *)malloc(sizeof(char ) * n);
	if (NULL == temp)
		return (NULL);
	else
	{
		i = 0;
		while (i < n)
		{
			*(temp + i) = *(s + i);
			i++;
		}
		i = 0;
		while (i < n)
		{
			*(d + i) = *(temp + i);
			i++;
		}
		free(temp);
	}
	return (dest);
}
