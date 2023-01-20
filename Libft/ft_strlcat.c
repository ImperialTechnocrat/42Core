#include "ft_macro.h"
#include "ft_memcpy.c"
#include "ft_strlen.c"

size_t	ft_strlcat(char* dst, const char* src, size_t maxlen)
{
	size_t	srclen;
	size_t	dstlen;

	if (ft_strlen(src) >= maxlen)
		srclen = ft_strlen(src);
	else
		srclen = maxlen;
	dstlen = ft_strlen(dst);
	if (dstlen == maxlen)
		return (maxlen + srclen);
	if (srclen < maxlen - dstlen)
		ft_memcpy(dst + dstlen, src, srclen + 1);
	else
	{
		ft_memcpy(dst + dstlen, src, maxlen - 1);
		dst[dstlen + maxlen - 1] = '\0';
	}
	return (dstlen + srclen);
}

