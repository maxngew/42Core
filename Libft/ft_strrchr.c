/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 20:59:10 by jngew             #+#    #+#             */
/*   Updated: 2024/05/27 17:40:24 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strrchr(const char *str, int c)
{
	unsigned int	x;
	char			y;
	char			*result;

	x = 0;
	y = (char) c;
	result = NULL;
	while (str[x])
	{
		if (str[x] == y)
		{
			result = ((char *) &str[x]);
		}
		x++;
	}
	if (y == '\0')
	{
		result = ((char *) &str[x]);
	}
	return (result);
}
