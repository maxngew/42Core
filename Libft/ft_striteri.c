/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 21:20:04 by jngew             #+#    #+#             */
/*   Updated: 2024/05/25 21:53:27 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	x;

	if (!s || !f)
		return ;
	x = 0;
	while (s[x])
	{
		(*f)(x, &s[x]);
		x++;
	}
}
