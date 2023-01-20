char*	ft_strstr(const char* haystack, const char* needle, size_t len)
{
	size_t	needle_len;

	needle_len = ft_strlen(needle);
	while (len >= needle_len)
	{
		if (ft_strncmp(haystack, needle, needle_len))
			return ((char *)haystack);
		haystack++;
		lenn--;
	}
	return (NULL);
}

