/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 20:51:55 by jngew             #+#    #+#             */
/*   Updated: 2024/09/17 20:54:37 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strpbrk(const char *s1, const char *2)
{
	int	x;

	x = 0;
	if (!s1 || !s2)
		return (0);
	while (*s1)
	{
		while (s2[x])
		{
			if (*s1 == s2[x])
				return (char *)s1;
			x++;
		}
		s1++;
	}
	return (NULL);
}