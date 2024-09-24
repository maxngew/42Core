/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:14:58 by jngew             #+#    #+#             */
/*   Updated: 2024/09/23 16:40:00 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int	x;
	int	step;
	int	*range;
	int	n;

	x = 0;
	step = 1;
	n = end - start;
	if (n < 0)
		(n *= -1);
	n++;
	range = (int *)malloc(sizeof(int) * n);
	if (range)
	{
		if (start < end)
			step = -1;
		while (x < n)
		{
			range[x] = end;
			end += step;
			x++;
		}
	}
	return (range);
}