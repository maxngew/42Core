/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 14:48:48 by jngew             #+#    #+#             */
/*   Updated: 2024/06/06 10:54:25 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexlower(unsigned int n, size_t *len)
{
	if (n == 0)
	{
		if (ft_char('0', len) == -1)
			return (-1);
		return (0);
	}
	if (n >= 16)
	{
		if (ft_hexlower(n / 16, len) == -1 || ft_hexlower(n % 16, len) == -1)
			return (-1);
		return (0);
	}
	else
	{
		if (n <= 9)
			return (ft_char(n + 48, len));
		else
			return (ft_char(n - 10 + 'a', len));
	}
}

int	ft_hexupper(unsigned int n, size_t *len)
{
	if (n == 0)
	{
		if (ft_char('0', len) == -1)
			return (-1);
		return (0);
	}
	if (n >= 16)
	{
		if (ft_hexupper(n / 16, len) == -1 || ft_hexupper(n % 16, len) == -1)
			return (-1);
		return (0);
	}
	else
	{
		if (n <= 9)
			return (ft_char(n + 48, len));
		else
			return (ft_char(n - 10 + 'A', len));
	}
}
