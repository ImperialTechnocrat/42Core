int	ft_atoi(const char *str)
{
	int	res;
	int	sign;
	const char	*p;

	res = 0;
	sign = 1;
	p = str;
	while (*p == ' ' || *p == '\t' || *p == '\n' || *p == '\r' || *p == '\f' || *p == '\v')
		p++;
	if (*p == '-')
	{
		sign = -1;
		p++;
	}
	else if (*p == '+')
		p++;

	while (*p >= '0' && *p <= '9')
	{
		res = (res * 10) + (*p - '0');
		p++;
	}
	return (sign * res);
}
