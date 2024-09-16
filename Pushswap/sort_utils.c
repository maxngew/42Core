/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 16:52:47 by jngew             #+#    #+#             */
/*   Updated: 2024/09/16 18:46:41 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_three(t_stack **a)
{
	if (ft_min(*a) == (*a)->number)
	{
		ft_rev_rotatea(a, 0);
		ft_swapa(a, 0);
	}
	else if (ft_max(*a) == (*a)->number)
	{
		ft_rotatea(a, 0);
		if (!ft_checksorted(*a))
			ft_swapa(a, 0);
	}
	else
	{
		if (ft_findindex(*a, ft_max(*a)) == 1)
			ft_rev_rotatea(a, 0);
		else
			ft_swapa(a, 0);
	}
}

void	ft_sort_b3(t_stack **a, t_stack **b)
{
	int		x;
	t_stack	*temp;

	while (ft_lstsize(*a) > 3 && !ft_checksorted(*a))
	{
		temp = *a;
		x = ft_rotate_ab(*a, *b);
		while (x >= 0)
		{
			if (x == ft_rarb_b(*a, *b, temp->number))
				x = ft_rot_rarb(a, b, temp->number, 'a');
			else if (x == ft_rrarrb_b(*a, *b, temp->number))
				x = ft_revrot_rrarrb(a, b, temp->number, 'a');
			else if (x == ft_rrarb_b(*a, *b, temp->number))
				x = ft_opprot_rrarb(a, b, temp->number, 'a');
			else if (x == ft_rarrb_b(*a, *b, temp->number))
				x = ft_splitrot_rarrb(a, b, temp->number, 'a');
			else
				temp = temp->next;
		}
	}
}

t_stack	**ft_sort_a(t_stack **a, t_stack **b)
{
	int		x;
	t_stack	*temp;

	while (*b)
	{
		temp = *b;
		x = ft_rotate_ba(*a, *b);
		while (x >= 0)
		{
			if (x == ft_rarb_a(*a, *b, temp->number))
				x = ft_rot_rarb(a, b, temp->number, 'b');
			else if (x == ft_rrarrb_a(*a, *b, temp->number))
				x = ft_revrot_rrarrb(a, b, temp->number, 'b');
			else if (x == ft_rrarb_a(*a, *b, temp->number))
				x = ft_opprot_rrarb(a, b, temp->number, 'b');
			else if (x == ft_rarrb_a(*a, *b, temp->number))
				x = ft_splitrot_rarrb(a, b, temp->number, 'b');
			else
				temp = temp->next;
		}
	}
	return (a);
}

t_stack	*ft_sort_b(t_stack **a)
{
	t_stack	*b;

	b = NULL;
	if (ft_lstsize(*a) > 3 && !ft_checksorted(*a))
		ft_pushb(a, &b, 0);
	if (ft_lstsize(*a) > 3 && !ft_checksorted(*a))
		ft_pushb(a, &b, 0);
	if (ft_lstsize(*a) > 3 && !ft_checksorted(*a))
		ft_sort_b3(a, &b);
	if (!ft_checksorted(*a))
		ft_sort_three(a);
	return (b);
}

void	ft_sort(t_stack **a)
{
	t_stack	*b;
	int		x;

	b = NULL;
	if (ft_lstsize(*a) == 2)
		ft_swapa(a, 0);
	else
	{
		b = ft_sort_b(a);
		a = ft_sort_a(a, &b);
		x = ft_findindex(*a, ft_min(*a));
		if (x < ft_lstsize(*a) - x)
		{
			while ((*a)->number != ft_min(*a))
				ft_rotatea(a, 0);
		}
		else
		{
			while ((*a)->number != ft_min(*a))
				ft_rev_rotatea(a, 0);
		}
	}
}
