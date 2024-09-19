/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 17:38:35 by jngew             #+#    #+#             */
/*   Updated: 2024/09/19 17:56:01 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int *tab, unsigned int len)
{
	int	results;
	unsigned int x = 0;

	if (len == 0)
		return (0);
	results = tab[x];
	while (x < len)
	{
		if (results < tab[x])
			results = tab[x];
		x++;
	}
	return (results);
}