/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_lst2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 18:09:09 by jngew             #+#    #+#             */
/*   Updated: 2024/09/16 18:22:08 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_lstlast(t_stack *list)
{
	t_stack	*current;

	if (!list)
		return (NULL);
	current = list;
	while (current->next)
		current = current->next;
	return (current);
}

int	ft_lstsize(t_stack *list)
{
	t_stack	*current;
	int		size;

	size = 0;
	current = list;
	while (current != NULL)
	{
		current = current->next;
		size++;
	}
	return (size);
}
