/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 13:32:02 by jngew             #+#    #+#             */
/*   Updated: 2024/06/06 10:55:00 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_str(char *str, size_t *len)
{
	size_t	x;

	x = 0;
	if (!str)
	{
		if (write(1, "(null)", 6) == -1)
			return (-1);
		*len += 6;
		return (0);
	}
	while (str[x] != '\0')
	{
		if (write(1, &str[x], 1) == -1)
			return (-1);
		(*len)++;
		x++;
	}
	return (0);
}
