/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 20:44:01 by jngew             #+#    #+#             */
/*   Updated: 2024/05/23 23:34:40 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	count;
	int	in_subs;

	count = 0;
	in_subs = 0;
	while (*s)
	{
		if (*s != c && !in_subs)
		{
			in_subs = 1;
			count++;
		}
		else if (*s == c)
		{
			in_subs = 0;
		}
		s++;
	}
	return (count);
}

static char	*substring(const char *start, size_t len)
{
	char	*sub;
	size_t	x;

	sub = (char *)malloc(sizeof(char) * (len + 1));
	x = 0;
	if (!sub)
		return (NULL);
	while (x < len)
	{
		sub[x] = start[x];
		x++;
	}
	sub[len] = '\0';
	return (sub);
}

static void	free_mem(char **result, int index)
{
	int	x;

	x = 0;
	while (x < index)
	{
		free(result[x]);
		x++;
	}
	free(result);
}

static const char	*s_next(const char *s, char c, char **result, int *index)
{
	const char	*start;
	size_t		len;

	start = s;
	len = 0;
	while (*s && *s != c)
	{
		len++;
		s++;
	}
	result[*index] = substring(start, len);
	if (!result[*index])
	{
		free_mem(result, *index);
		return (NULL);
	}
	(*index)++;
	return (s);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		substr_count;
	int		index;

	substr_count = count_words(s, c);
	result = (char **)malloc(sizeof(char *) * (substr_count + 1));
	if (!result)
		return (NULL);
	index = 0;
	while (*s)
	{
		if (*s != c)
		{
			s = s_next(s, c, result, &index);
			if (!s)
			{
				free_mem(result, index);
				return (NULL);
			}
		}
		else
			s++;
	}
	result[index] = NULL;
	return (result);
}
