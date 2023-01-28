/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkallay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 19:07:22 by jkallay           #+#    #+#             */
/*   Updated: 2023/01/28 19:07:26 by jkallay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;
	char	*str;

	last = NULL;
	str = (char *)s;
	while (*str)
	{
		if (*str == (char)c)
			last = str;
		str++;
	}
	if (*str == c)
		return (str);
	return (last);
}
