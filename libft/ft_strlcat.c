/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkallay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 19:29:24 by jkallay           #+#    #+#             */
/*   Updated: 2023/01/28 19:30:20 by jkallay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len;
	size_t	n;
	size_t	ret;
	char	*d;

	d = dest;
	n = size;
	while (n-- != 0 && *d != 0)
		d++;
	len = d - dest;
	n = size - len;
	ret = len + ft_strlen(src);
	if (n == 0)
		return (ret);
	while (*src != 0)
	{
		if (n != 1)
		{
			*d++ = *src;
			n--;
		}
		src++;
	}
	*d = 0;
	return (ret);
}
