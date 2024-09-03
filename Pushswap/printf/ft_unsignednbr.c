/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsignednbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 14:01:43 by jngew             #+#    #+#             */
/*   Updated: 2024/06/05 15:59:00 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_unsignednbr(unsigned int n, size_t *len)
{
	if (n > 9)
	{
		ft_unsignednbr(n / 10, len);
		ft_unsignednbr(n % 10, len);
	}
	else
	{
		ft_char(n + 48, len);
	}
}
