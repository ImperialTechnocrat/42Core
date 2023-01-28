/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkallay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 18:59:20 by jkallay           #+#    #+#             */
/*   Updated: 2023/01/28 18:59:27 by jkallay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		len;
	char	*result;

	i = -1;
	j = -1;
	if (s1 == NULL || set == NULL)
		return (NULL);
	len = ft_strlen(s1);
	while (++i <= len / 2)
	{
		if (ft_strchr(set, s1[i]) == NULL)
			break ;
	}
	while (++j < len / 2)
	{
		if (ft_strchr(set, s1[len - j - 1]) == NULL)
			break ;
	}
	result = ft_substr(s1, i, len - i - j);
	if (result == NULL)
		return (NULL);
	return (result);
}
