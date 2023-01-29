/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkallay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 14:29:10 by jkallay           #+#    #+#             */
/*   Updated: 2023/01/24 16:49:15 by jkallay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

int	word_len(char const *s, char c)
{
	int	len;

	len = 0;
	while (*s && *s != c)
	{
		len++;
		s++;
	}
	return (len);
}

void	fill_result(char **result, char const *s, char c)
{
	int	j;
	int	k;

	j = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			k = 0;
			result[j] = (char *)malloc(sizeof(char) * (word_len(s, c) + 1));
			if (!result[j])
				return ;
			while (*s && *s != c)
				result[j][k++] = *s++;
			result[j][k] = '\0';
			j++;
		}
	}
	result[j] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		word_count;

	word_count = count_words(s, c);
	result = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!result)
		return (NULL);
	fill_result(result, s, c);
	return (result);
}
