/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 20:32:28 by jngew             #+#    #+#             */
/*   Updated: 2024/05/28 16:47:25 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *nee, size_t n)
{
	size_t	x;
	size_t	y;

	x = 0;
	if (nee[0] == 0)
		return ((char *)hay);
	while (hay[x] && x < n)
	{
		y = 0;
		while (hay[x + y] == nee[y] && hay[x + y] && x + y < n)
		{
			y++;
			if (nee[y] == '\0')
				return ((char *)hay + x);
		}
		x++;
	}
	return (NULL);
}
