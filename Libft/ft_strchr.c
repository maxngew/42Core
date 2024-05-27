/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 20:20:47 by jngew             #+#    #+#             */
/*   Updated: 2024/05/27 17:39:46 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
