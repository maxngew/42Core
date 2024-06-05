/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 15:30:11 by jngew             #+#    #+#             */
/*   Updated: 2024/06/05 15:58:35 by jngew            ###   ########.fr       */
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
	size_t	num;

	num = (size_t)ptr;
	ft_str("0x", len);
	if (num == 0)
		ft_char('0', len);
	else
		cal_base(num, len);
}
