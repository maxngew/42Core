/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 18:40:54 by jngew             #+#    #+#             */
/*   Updated: 2024/05/28 01:22:41 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int x, size_t n)
{
	unsigned char	*temp_x;

	temp_x = (unsigned char *)str;
	while (n > 0)
	{
		*temp_x = (unsigned char) x;
		temp_x++;
		n--;
	}
	return (str);
}
