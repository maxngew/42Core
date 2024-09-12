/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_lst.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 23:39:09 by jngew             #+#    #+#             */
/*   Updated: 2024/09/12 12:41:07 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_min(t_stack *a)
{
	int	x;

	x = a->number;
	while (a)
	{
		if (a->number < x)
			x = a->number;
		a = a->next;
	}
	return (x);
}

int	ft_max(t_stack *a)
{
	int	x;

	x = a->number;
	while (a)
	{
		if (a->number > x)
			x = a->number;
		a = a->next;
	}
	return (x);
}
