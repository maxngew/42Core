/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 18:16:29 by jngew             #+#    #+#             */
/*   Updated: 2024/05/27 16:17:27 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	x;

	dest_len = 0;
	src_len = 0;
	while (dest_len < destsize && dest[dest_len] != '\0')
		++dest_len;
	while (src[src_len] != '\0')
		++src_len;
	if (destsize == 0)
		return (src_len);
	if (dest_len == destsize)
		return (destsize + src_len);
	x = 0;
	while (src[x] != '\0' && dest_len + x + 1 < destsize)
	{
		dest[dest_len + x] = src[x];
		++x;
	}
	if (dest_len + x < destsize)
		dest[dest_len + x] = '\0';
	return (dest_len + src_len);
}
