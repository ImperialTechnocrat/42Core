#include "ft_macro.h"

int	ft_strlen(const char* s)
{
	size_t	len;

	while(s[len] != '\0')
		len++;
	return (len);
}
