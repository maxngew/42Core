/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 16:00:30 by jngew             #+#    #+#             */
/*   Updated: 2024/05/27 17:52:11 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*temp_dest;
	char	*temp_src;
	size_t	x;

	if (!dest && !src)
		return (NULL);
	temp_dest = (char *)dest;
	temp_src = (char *)src;
	x = 0;
	if (temp_src < temp_dest && (temp_src + n) >= temp_dest)
	{
		while (n-- > 0)
			temp_dest[n] = temp_src[n];
	}
	else
	{
		while (x < n)
		{
			temp_dest[x] = temp_src[x];
			x++;
		}
	}
	return (dest);
}
