void*	ft_memcpy(void* dest, const void* scr, size_t n)
{
	unsigned char* d = dest;
	const unsigned char* s = scr;
	while (n--)
		*d++ = *s++;
	return dest;
}
