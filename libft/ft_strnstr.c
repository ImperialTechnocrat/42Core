/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkallay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 19:04:13 by jkallay           #+#    #+#             */
/*   Updated: 2023/01/28 19:04:24 by jkallay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (haystack == NULL || len == 0)
		return (0);
	if (*needle == 0)
		return ((char *)haystack);
	i = 0;
	while (haystack[i] != 0 && i < len)
	{
		j = 0;
		while (haystack[i + j] && needle[j] && (i + j < len)
			&& (haystack[i + j] == needle[j]))
			j++;
		if (needle[j] == 0)
			return ((char *)(haystack + i));
		i++;
	}
	return (0);
}
