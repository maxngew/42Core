/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 23:05:43 by jngew             #+#    #+#             */
/*   Updated: 2024/06/06 10:54:38 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_nbr(int n, size_t *len)
{
	if (n == -2147483648)
	{
		if (ft_char('-', len) == -1 || ft_char('2', len) == -1)
			return (-1);
		return (ft_nbr(147483648, len));
	}
	else if (n < 0)
	{
		if (ft_char('-', len) == -1)
			return (-1);
		n = -n;
		return (ft_nbr(n, len));
	}
	else if (n > 9)
	{
		if (ft_nbr(n / 10, len) == -1 || ft_nbr(n % 10, len) == -1)
			return (-1);
		return (0);
	}
	else
		return (ft_char(n + 48, len));
}
