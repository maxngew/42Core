/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 18:16:29 by jngew             #+#    #+#             */
/*   Updated: 2024/05/15 19:40:00 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	dest_len;
	size_t	src_len;

	dest_len = 0;
	while (dest_len < destsize && dest[dest_len] != '\0')
		++dest_len;
	src_len = 0;
	while (src[src_len] != '\0' && dest_len + src_len + 1 < destsize)
	{
		dest[dest_len + src_len] = src[src_len];
		++src_len;
	}
	if (dest_len < destsize)
		dest[dest_len + src_len] = '\0';
	size_t	total_len = dest_len + src_len;
	if (src[0] == '\0')
		return (total_len);
	return (total_len);
}
/*
#include <stdio.h>

int	main()
{
	char dest[20] = "Hello ";
	char src[] = "World!";
	size_t destsize = sizeof(dest);
	size_t result = ft_strlcat(dest, src, destsize);
	printf("%s\n", dest);
	printf("%zu\n", result);
}
*/
