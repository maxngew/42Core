/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 15:55:04 by jngew             #+#    #+#             */
/*   Updated: 2024/05/27 16:51:52 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*str_x;
	unsigned char	y;
	size_t			x;

	str_x = (unsigned char *)str;
	y = (unsigned char)c;
	x = 0;
	while (x < n)
	{
		if (str_x[x] == y)
		{
			return ((void *) &str_x[x]);
		}
		x++;
	}
	return (NULL);
}
