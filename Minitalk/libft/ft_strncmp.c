/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 21:38:42 by jngew             #+#    #+#             */
/*   Updated: 2024/05/28 16:47:03 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	x;

	x = 0;
	while ((str1[x] || str2[x]) && x < n)
	{
		if ((unsigned char) str1[x] != (unsigned char) str2[x])
		{
			return ((unsigned char) str1[x] - (unsigned char) str2[x]);
		}
		x++;
	}
	return (0);
}
