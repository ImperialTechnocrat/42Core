/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkallay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 13:59:59 by jkallay           #+#    #+#             */
/*   Updated: 2023/01/24 14:04:11 by jkallay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	const char	*p;
	int			res;
	int			sign;

	res = 0;
	sign = 1;
	p = str;
	while (*p == ' ' || (*p >= 9 && *p <= 13))
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