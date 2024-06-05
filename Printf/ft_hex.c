/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 14:48:48 by jngew             #+#    #+#             */
/*   Updated: 2024/06/05 15:57:39 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hexlower(unsigned int n, size_t *len)
{
	if (n == 0)
	{
		ft_char('0', len);
		return ;
	}
	if (n >= 16)
	{
		ft_hexlower(n / 16, len);
		ft_hexlower(n % 16, len);
	}
	else
	{
		if (n <= 9)
			ft_char(n + 48, len);
		else
			ft_char(n - 10 + 'a', len);
	}
}

void	ft_hexupper(unsigned int n, size_t *len)
{
	if (n == 0)
	{
		ft_char('0', len);
		return ;
	}
	if (n >= 16)
	{
		ft_hexupper(n / 16, len);
		ft_hexupper(n % 16, len);
	}
	else
	{
		if (n <= 9)
			ft_char(n + 48, len);
		else
			ft_char(n - 10 + 'A', len);
	}
}
