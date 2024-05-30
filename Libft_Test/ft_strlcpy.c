/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 17:22:45 by jngew             #+#    #+#             */
/*   Updated: 2024/05/27 15:46:35 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	size_t	x;

	x = 0;
	if (destsize == 0)
		return (ft_strlen(src));
	while (x + 1 < destsize && src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	if (destsize != 0)
		dest[x] = '\0';
	return (ft_strlen(src));
}
