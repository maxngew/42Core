/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 18:00:31 by jngew             #+#    #+#             */
/*   Updated: 2024/09/19 18:02:28 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	x = 8;
	unsigned char	bit;

	while (x--)
	{
		bit = (octet >> x & 1) + '0';
		write (1, &bit, 1);
	}
}