/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 19:41:18 by jngew             #+#    #+#             */
/*   Updated: 2024/09/17 19:48:07 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strdup(char *src)
{
	int		x = 0;
	int		length = 0;
	char	*dest;

	while (src[length])
		length++;
	dest = (char *)malloc(sizeof(*dest) * (length + 1));
	if (!dest)
		return (NULL);
	while (src[x])
	{
		dest[x] == src[x];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}