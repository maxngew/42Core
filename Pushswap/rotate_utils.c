/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 18:00:57 by jngew             #+#    #+#             */
/*   Updated: 2024/09/15 19:31:13 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_rot_rarb(t_stack **a, t_stack **b, int x, char c)
{
	if (c == 'a')
	{
		while ((*a)->number != x && ft_findplace_b(*b, x) > 0)
			ft_rr_ab(a, b, 0);
		while ((*a)->number != x)
			ft_rotatea(a, 0);
		while (ft_findplace_b(*b, x) > 0)
			ft_rotateb(b, 0);
		ft_pushb(a, b, 0);
	}
	else
	{
		while ((*b)->number != x && ft_findplace_a(*a, x) > 0)
			ft_rr_ab(a, b, 0);
		while ((*b)->number != x)
			ft_rotateb(b, 0);
		while (ft_findplace_a(*a, x) > 0)
			ft_rotatea(a, 0);
		ft_pusha(a, b, 0);
	}
	return (-1);
}

int	ft_revrot_rrarrb(t_stack **a, t_stack **b, int x, char c)
{
	if (c == 'a')
	{
		while ((*a)->number != x && ft_findplace_b(*b, x) > 0)
			ft_rrr_ab(a, b, 0);
		while ((*a)->number != x)
			ft_rev_rotatea(a, 0);
		while (ft_findplace_b(*b, x) > 0)
			ft_rev_rotateb(b, 0);
		ft_pushb(a, b, 0);
	}
	else
	{
		while ((*b)->number != x && ft_findplace_a(*a, x) > 0)
			ft_rrr_ab(a, b, 0);
		while ((*b)->number != x)
			ft_rev_rotateb(b, 0);
		while (ft_findplace_a(*a, x) > 0)
			ft_rev_rotatea(a, 0);
		ft_pusha(a, b, 0);
	}
	return (-1);
}

int	ft_opprot_rrarb(t_stack **a, t_stack **b, int x, char c)
{
	if (c == 'a')
	{
		while ((*a)->number != x)
			ft_rev_rotatea(a, 0);
		while (ft_findplace_b(*b, x) > 0)
			ft_rotateb(b, 0);
		ft_pushb(a, b, 0);
	}
	else
	{
		while (ft_findplace_a(*a, x) > 0)
			ft_rev_rotatea(a, 0);
		while ((*b)->number != x)
			ft_rotateb(b, 0);
		ft_pusha(a, b, 0);
	}
	return (-1);
}

int	ft_splitrot_rarrb(t_stack **a, t_stack **b, int x, char c)
{
	if (c == 'a')
	{
		while ((*a)->number != x)
			ft_rotatea(a, 0);
		while (ft_findplace_b(*b, x) > 0)
			ft_rev_rotateb(b, 0);
		ft_pushb(a, b, 0);
	}
	else
	{
		while (ft_findplace_a(*a, x) > 0)
			ft_rotatea(a, 0);
		while ((*b)->number != x)
			ft_rev_rotateb(b, 0);
		ft_pusha(a, b, 0);
	}
	return (-1);
}
