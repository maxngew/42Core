/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_ba.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 16:29:30 by jngew             #+#    #+#             */
/*   Updated: 2024/09/14 16:49:13 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_rarb_a(t_stack *a, t_stack *b, int x)
{
	int	y;

	y = ft_findplace_a(a, x);
	if (y < ft_findindex(b, x))
		y = ft_findindex(b, x);
	return (y);
}

int	ft_rrarrb_a(t_stack *a, t_stack *b, int x)
{
	int	y;

	y = 0;
	if (ft_findplace_a(a, x))
		y = ft_lstsize(a) - ft_findplace_a(a, x);
	if ((y < (ft_lstsize(b) - ft_findindex(b, x))) && ft_findindex(b, x))
		y = ft_lstsize(b) - ft_findindex(b, x);
	return (y);
}

int	ft_rarrb_a(t_stack *a, t_stack *b, int x)
{
	int	y;

	y = 0;
	if (ft_findindex(b, x))
		y = ft_lstsize(b) - ft_findindex(b, x);
	y = ft_findplace_a(a, x) + y;
	return (y);
}

int	ft_rrarb_a(t_stack *a, t_stack *b, int x)
{
	int	y;

	y = 0;
	if (ft_findplace_a(a, x))
		y = ft_lstsize(a) - ft_findplace_a(a, x);
	y = ft_findindex(b, x) + y;
	return (y);
}
