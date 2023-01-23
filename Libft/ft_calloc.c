#include "ft_macro.h"
#include "ft_bzero.c"
#include <stdlib.h>

void*	ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	if (ptr != NULL)
		ft_bzero(ptr, nmemb * size);
	return (ptr);
}

