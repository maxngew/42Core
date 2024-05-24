/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 23:56:27 by jngew             #+#    #+#             */
/*   Updated: 2024/05/24 17:38:29 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_dcount(long n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		count++;
		n = -n;
	}
	if (n == 0)
		count++;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static char	*alloc(int len)
{
	char	*tmp;

	tmp = malloc(sizeof(char) * (len + 1));
	if (!tmp)
		return (NULL);
	tmp[0] = '0';
	return (tmp);
}

char	*ft_itoa(int n)
{
	int		x;
	int		length;
	char	*result;
	long	number;

	number = n;
	length = get_dcount(number);
	result = alloc(length);
	if (!result)
		return (NULL);
	if (number < 0)
		number = -number;
	x = length - 1;
	while (number != 0)
	{
		result[x] = ((number % 10) + 48);
		number = number / 10;
		x--;
	}
	if (n < 0)
		result[0] = '-';
	result[length] = 0;
	return (result);
}
