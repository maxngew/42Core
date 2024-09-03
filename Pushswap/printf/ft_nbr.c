/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 23:05:43 by jngew             #+#    #+#             */
/*   Updated: 2024/06/05 15:58:03 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_nbr(int n, size_t *len)
{
	if (n == -2147483648)
	{
		ft_char('-', len);
		ft_char('2', len);
		ft_nbr(147483648, len);
	}
	else if (n < 0)
	{
		ft_char('-', len);
		n = -n;
		ft_nbr(n, len);
	}
	else if (n > 9)
	{
		ft_nbr(n / 10, len);
		ft_nbr(n % 10, len);
	}
	else
		ft_char(n + 48, len);
}
