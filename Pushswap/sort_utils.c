/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 16:52:47 by jngew             #+#    #+#             */
/*   Updated: 2024/09/15 23:00:36 by jngew            ###   ########.fr       */
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

void	ft_sort(t_stack **a)
{
	t_stack	*b;
	int		x;

	b = NULL;
	if (ft_lstlast(*a) == 2)
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

t_stack	**ft_sort_a(t_stack **a, t_stack **b)
{
	int		x;
	t_stack	*temp;

	while (*b)
	{
		temp = *b;
	}
}
