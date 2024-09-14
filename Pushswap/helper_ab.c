/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_ab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 01:13:13 by jngew             #+#    #+#             */
/*   Updated: 2024/09/14 16:31:50 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_rarb_b(t_stack *a, t_stack *b, int x)
{
	int	y;

	y = ft_findplace_b(b, x);
	if (y < ft_findindex(a, x))
		y = ft_findindex(a, x);
	return (y);
}

int	ft_rrarrb_b(t_stack *a, t_stack *b, int x)
{
	int	y;

	y = 0;
	if (ft_findplace_b(b, x))
		y = ft_lstsize(b) - ft_findplace_b(b, x);
	if ((y < (ft_lstsize(a) - ft_findindex(a, x))) && ft_findindex(a, x))
		y = ft_lstsize(a) - ft_findindex(a, x);
	return (y);
}

int	ft_rrarb_b(t_stack *a, t_stack *b, int x)
{
	int	y;

	y = 0;
	if (ft_findindex(a, x))
		y = ft_lstsize(a) - ft_findindex(a, x);
	y = ft_findplace_b(b, x) + y;
	return (y);
}

int	ft_rarrb_b(t_stack *a, t_stack *b, int x)
{
	int	y;

	y = 0;
	if (ft_findplace_b(b, x))
		y = ft_lstsize(b) - ft_findplace_b(b, x);
	y = ft_findindex(a, x) + y;
	return (y);
}
