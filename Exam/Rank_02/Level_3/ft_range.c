/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:34:10 by jngew             #+#    #+#             */
/*   Updated: 2024/09/23 15:44:43 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	x;
	int	len;
	int	*res;

	x = 0;
	len = abs((end - start)) + 1;
	res = (int *)malloc(sizeof(int) * len);
	while (x < len)
	{
		if (start < end)
		{
			res[x] = start;
			start++;
			x++;
		}
		else
		{
			res[x] = start;
			start--;
			x++;
		}
	}
	return (res);
}