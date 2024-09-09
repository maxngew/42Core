/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op2.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 21:53:53 by jngew             #+#    #+#             */
/*   Updated: 2024/09/09 23:53:15 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// sb (swap b): Swap the first 2 elements at the top of struct B.
void	ft_swapb(t_stack **b, int x)
{
	t_stack	*temp;

	if (!*b || !(*b)->next)
		return ;
	temp = *b;
	*b = (*b)->next;
	temp->next = (*b)->next;
	(*b)->next = temp;
	if (x == 0)
		ft_printf("sb\n");
}

// pb (push b): Take the first element at the top of A and put it on top of B.
void	ft_pushb(t_stack **a, t_stack **b, int x)
{
	t_stack	*temp;

	if (!*a)
		return ;
	temp = *b;
	*b = *a;
	*a = (*a)->next;
	(*b)->next = temp;
	if (x == 0)
		ft_printf("pb\n");
}

// rb (rotate b): First element become last, all shift up by 1.
void	ft_rotateb(t_stack **b, int x)
{
	t_stack	*temp;

	if (!*b || !(*b)->next)
		return ;
	temp = *b;
	*b = ft_lstlast(*b);
	(*b)->next = temp;
	*b = temp->next;
	temp->next = NULL;
	if (x == 0)
		ft_printf("rb\n");
}

// rrb (reverse rotate b): shift down all elements, last one become first.
void	ft_rev_rotateb(t_stack **b, int x)
{
	t_stack	*temp;
	int		y;

	y = 0;
	if (!*b || !(*b)->next)
		return ;
	temp = *b;
	while ((*b)->next)
	{
		y++;
		*b = (*b)->next;
	}
	(*b)->next = temp;
	while (y > 1)
	{
		temp = temp->next;
		y--;
	}
	temp->next = NULL;
	if (x == 0)
		ft_printf("rrb\n");
}
