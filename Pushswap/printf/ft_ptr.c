/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 15:30:11 by jngew             #+#    #+#             */
/*   Updated: 2024/06/07 16:28:59 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	cal_base(size_t num, size_t *len)
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
}

void	ft_ptr(void *ptr, size_t *len)
{
	unsigned long long	num;

	if (!ptr)
	{
		ft_str("(nil)", len);
		return ;
	}
	num = (unsigned long long)ptr;
	ft_str("0x", len);
	cal_base(num, len);
}
