/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 18:09:08 by jngew             #+#    #+#             */
/*   Updated: 2024/09/19 18:13:37 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	int	x = 8;
	unsigned char	res = 0;

	while (x > 0)
	{
		res = res * 2 + (octet % 2);
		octet = octet / 2;
		x--;
	}
	return (res);
}