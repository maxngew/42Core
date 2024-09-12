/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_lst.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 23:39:09 by jngew             #+#    #+#             */
/*   Updated: 2024/09/12 16:23:51 by jngew            ###   ########.fr       */
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

int	ft_findindex(t_stack *a, int num)
{
	int	x;

	x = 0;
	while (a->number != num)
	{
		x++;
		a = a->next;
	}
	a->index = 0;
	return (x);
}

int	ft_findplace_b(t_stack *b, int num_push)
{
	int		x;
	t_stack	*temp;

	x = 1;
	if (num_push > b->number && num_push < ft_lstlast(b)->number)
		x = 0;
	else if (num_push > ft_max(b) || num_push < ft_min(b))
		x = ft_findindex(b, ft_max(b));
	else
	{
		temp = b->next;
		while (b->number < num_push || temp->number > num_push)
		{
			b = b->next;
			temp = b->next;
			x++;
		}
	}
	return (x);
}

int	ft_findplace_a(t_stack *a, int num_push)
{
	int		x;
	t_stack	*temp;

	x = 1;
	if (num_push < a->number && num_push > ft_lstlast(a)->number)
		x = 0;
	else if (num_push > ft_max(a) || num_push < ft_min(a))
		x = ft_findindex(a, ft_min(a));
	else
	{
		temp = a->next;
		while (a->number > num_push || temp->number < num_push)
		{
			a = a->next;
			temp = a->next;
			x++;
		}
	}
	return (x);
}