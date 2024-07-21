/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 13:39:18 by jngew             #+#    #+#             */
/*   Updated: 2024/07/21 17:11:46 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	int	x;

	x = 0;
	if (str[x] == '\0')
		return (0);
	while (str[x] != '\0')
		x++;
	return (x);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	x;
	size_t	y;
	char	*res;

	if (!s1 || !s2)
		return (NULL);
	res = (char *)malloc(sizeof(char)
			* (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!res)
		return (free((void *)s1), NULL);
	x = 0;
	y = 0;
	while (s1[x])
		res[y++] = s1[x++];
	x = 0;
	while (s2[x])
		res[y++] = s2[x++];
	res[y] = '\0';
	free ((void *)(s1));
	return (res);
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
	size_t	x;
	char	*dest;

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
