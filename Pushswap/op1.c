/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op1.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 17:50:15 by jngew             #+#    #+#             */
/*   Updated: 2024/09/09 23:30:29 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// sa (swap a): Swap the first 2 elements at the top of struct A
void	ft_swapa(t_stack **a, int x)
{
	t_stack	*temp;

	if (!*a || !(*a)->next)
		return ;
	temp = *a;
	*a = (*a)->next;
	temp->next = (*a)->next;
	(*a)->next = temp;
	if (x == 0)
		ft_printf("sa\n");
}

// pa (push a): Take the first element at the top of B and put it on top of A
void	ft_pusha(t_stack **a, t_stack **b, int x)
{
	t_stack	*temp;

	if (!*b)
		return ;
	temp = *a;
	*a = *b;
	*b = (*b)->next;
	(*a)->next = temp;
	if (x == 0)
		ft_printf("pa\n");
}

// ra (rotate a): First element become last, all shift up by 1.
void	ft_rotatea(t_stack **a, int x)
{
	t_stack	*temp;

	if (!*a || !(*a)->next)
		return ;
	temp = *a;
	*a = ft_lstlast(*a);
	(*a)->next = temp;
	*a = temp->next;
	temp->next = NULL;
	if (x == 0)
		ft_printf("ra\n");
}

// rra (reverse rotate a): shift down all elements, last one become first.
void	ft_rev_rotatea(t_stack **a, int x)
{
	t_stack	*temp;
	int		y;

	y = 0;
	if (!*a || !(*a)->next)
		return ;
	temp = *a;
	while ((*a)->next)
	{
		*a = (*a)->next;
		y++;
	}
	(*a)->next = temp;
	while (y > 1)
	{
		temp = temp->next;
		y--;
	}
	temp->next = NULL;
	if (x == 0)
		ft_printf("rra\n");
}
