/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 19:37:48 by jngew             #+#    #+#             */
/*   Updated: 2024/09/17 20:55:29 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int	x = 0;
	int	y = 0;

	while (s[x] != '\0')
	{
		while (reject[y] != '\0')
		{
			if (s[x] == reject[y])
				return (x);
			y++;
		}
		x++;
	}
	return (x);
}