int	ft_toupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c - ('A' -'a'));
	return (c);
}
