/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 22:42:38 by jngew             #+#    #+#             */
/*   Updated: 2024/09/16 18:45:14 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_rotate_ba(t_stack *a, t_stack *b)
{
	int		x;
	t_stack	*temp;

	temp = b;
	x = ft_rrarrb_a(a, b, temp->number);
	while (temp)
	{
		if (x > ft_rarb_a(a, b, temp->number))
			x = ft_rarb_a(a, b, temp->number);
		if (x > ft_rrarrb_a(a, b, temp->number))
			x = ft_rrarrb_a(a, b, temp->number);
		if (x > ft_rarrb_a(a, b, temp->number))
			x = ft_rarrb_a(a, b, temp->number);
		if (x > ft_rrarb_a(a, b, temp->number))
			x = ft_rrarb_a(a, b, temp->number);
		temp = temp->next;
	}
	return (x);
}

int	ft_rotate_ab(t_stack *a, t_stack *b)
{
	int		x;
	t_stack	*temp;

	temp = a;
	x = ft_rrarrb_b(a, b, temp->number);
	while (temp)
	{
		if (x > ft_rarb_b(a, b, temp->number))
			x = ft_rarb_b(a, b, temp->number);
		if (x > ft_rrarrb_b(a, b, temp->number))
			x = ft_rrarrb_b(a, b, temp->number);
		if (x > ft_rarrb_b(a, b, temp->number))
			x = ft_rarrb_b(a, b, temp->number);
		if (x > ft_rrarb_b(a, b, temp->number))
			x = ft_rrarb_b(a, b, temp->number);
		temp = temp->next;
	}
	return (x);
}
