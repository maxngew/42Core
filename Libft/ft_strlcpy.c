/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 17:22:45 by jngew             #+#    #+#             */
/*   Updated: 2024/05/20 12:54:56 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	size_t	x;

	x = 0;
	if (destsize == 0)
		return (0);
	while (x + 1 < destsize && src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	if (destsize > 0)
		dest[x] = '\0';
	if (src[0] == '\0')
		return (0);
	while (src[x] != '\0')
		x++;
	return (x);
}
/*
#include <stdio.h>

int	main()
{
	char src[] = "Hello World!";
	char dest[15];
	size_t len = ft_strlcpy(dest, src, sizeof(dest));

	printf("Copied String: %s\n", dest);
	printf("Length of Source String: %zu\n", len);
	return (0);
}
*/
