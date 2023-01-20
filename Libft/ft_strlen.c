#ifndef FT_STRLEN
#define FT_STRLEN
#include "ft_macro.h"

int	ft_strlen(const char* s)
{
	size_t	len;

	len = 0;
	while(s[len] != '\0')
		len++;
	return (len);
}
#endif
