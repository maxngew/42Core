/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 21:04:51 by jngew             #+#    #+#             */
/*   Updated: 2024/09/17 21:08:15 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *s, int x)
{
	while (*s != '\0')
	{
		if (*s == x)
			return ((char *)s);
		++s;
	}
	return (0);
}

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	x;

	x = 0;
	while (s[x] != '\0')
	{
		if (ft_strchr(accept, s[x]) == 0)
			break ;
		++x;
	}
	return (x);
}