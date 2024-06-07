/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsignednbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 14:01:43 by jngew             #+#    #+#             */
/*   Updated: 2024/06/06 10:54:11 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsignednbr(unsigned int n, size_t *len)
{
	if (n > 9)
	{
		if (ft_unsignednbr(n / 10, len) == -1
			|| ft_unsignednbr(n % 10, len) == -1)
			return (-1);
		return (0);
	}
	else
	{
		return (ft_char(n + 48, len));
	}
}
