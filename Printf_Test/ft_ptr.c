/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 15:30:11 by jngew             #+#    #+#             */
/*   Updated: 2024/06/06 10:54:50 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	cal_base(size_t num, size_t *len)
{
	if (num >= 16)
	{
		cal_base(num / 16, len);
		cal_base(num % 16, len);
	}
	else
	{
		if (num <= 9)
			ft_char((num + 48), len);
		else
			ft_char((num - 10 + 'a'), len);
	}
	return (0);
}

int	ft_ptr(void *ptr, size_t *len)
{
	unsigned long long	num;

	if (!ptr)
	{
		if (ft_str("0x0", len) == -1)
			return (-1);
		return (0);
	}
	num = (unsigned long long)ptr;
	if (ft_str("0x", len) == -1 || cal_base(num, len) == -1)
		return (-1);
	return (0);
}
