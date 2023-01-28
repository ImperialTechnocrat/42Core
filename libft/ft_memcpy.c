/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkallay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 14:10:12 by jkallay           #+#    #+#             */
/*   Updated: 2023/01/24 14:17:50 by jkallay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *scr, size_t n)
{
	const unsigned char	*s;
	unsigned char		*d;

	d = dest;
	s = scr;
	while (n--)
		*d++ = *s++;
	return (dest);
}
