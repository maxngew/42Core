/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op3.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 21:47:51 by jngew             #+#    #+#             */
/*   Updated: 2024/09/09 23:38:12 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//sa & sb at the same time
void	ft_ss_ab(t_stack **a, t_stack **b, int x)
{
	t_stack	*temp;

	if ((!*a || !(*a)->next) || (!*b || !(*b)->next))
		return ;
	temp = *a;
	*a = (*a)->next;
	temp->next = (*a)->next;
	(*a)->next = temp;
	temp = *b;
	*b = (*b)->next;
	temp->next = (*b)->next;
	(*b)->next = temp;
	if (x == 0)
		ft_printf("ss\n");
}

//ra & rb at the same time
void	ft_rr_ab(t_stack **a, t_stack **b, int x)
{
	t_stack	*temp;

	if ((!*a || !(*a)->next) || (!*b || !(*b)->next))
		return ;
	temp = *a;
	*a = ft_lstlast(*a);
	(*a)->next = temp;
	*a = temp->next;
	temp->next = NULL;
	temp = *b;
	*b = ft_lstlast(*b);
	(*b)->next = temp;
	*b = temp->next;
	temp->next = NULL;
	if (x == 0)
		ft_printf("rr\n");
}

// rra & rrb at the same time
void	ft_rrr_ab(t_stack **a, t_stack **b, int x)
{
	t_stack	*temp;
	int		y;

	y = 0;
	if ((!*a || !(*a)->next) || (!*b || !(*b)->next))
		return ;
	temp = *a;
	while ((*a)->next)
	{
		y++;
		*a = (*a)->next;
	}
	(*a)->next = temp;
	while (y > 1)
	{
		temp = temp->next;
		y--;
	}
	temp->next = NULL;
	ft_rrr_absub(b, x);
}

void	ft_rrr_absub(t_stack **b, int x)
{
	t_stack	*temp;
	int		y;

	y = 0;
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
		ft_printf("rrr\n");
}
