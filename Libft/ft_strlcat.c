/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 18:16:29 by jngew             #+#    #+#             */
/*   Updated: 2024/05/29 13:39:56 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	x;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (destsize == 0)
		return (src_len);
	if (dest_len >= destsize)
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
