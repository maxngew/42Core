/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 13:39:18 by jngew             #+#    #+#             */
/*   Updated: 2024/06/18 21:22:26 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	x;

	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	return (x);
}

char	*ft_strchr(const char *str, int c)
{
	unsigned int	x;
	char			y;

	x = 0;
	y = (char) c;
	while (str[x])
	{
		if (str[x] == y)
		{
			return ((char *) &str[x]);
		}
		x++;
	}
	if (y == '\0')
	{
		return ((char *) &str[x]);
	}
	return (NULL);
}

char	*ft_strdup(const char *s1)
{
	size_t		x;
	char		*dest;

	if (!s1)
		return (NULL);
	dest = (char *)malloc(ft_strlen(s1) + 1);
	if (!dest)
		return (NULL);
	x = 0;
	while (s1[x])
	{
		dest[x] = s1[x];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	x;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = (ft_strlen(s + start));
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	x = 0;
	while (x < len)
	{
		substr[x] = s[start + x];
		x++;
	}
	substr[x] = '\0';
	return (substr);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*str_res;
	size_t	x;
	size_t	y;

	if (!s1 || !s2)
		return (NULL);
	str_res = (char *)malloc(sizeof(char)
			* ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!str_res)
	{
		free (str_res);
		return (NULL);
	}
	x = 0;
	y = 0;
	while (s1[x])
		str_res[y++] = s1[x++];
	x = 0;
	while (s2[x])
		str_res[y++] = s2[x++];
	str_res[y] = '\0';
	return (str_res);
}
