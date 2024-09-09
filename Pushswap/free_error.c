/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_error.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 00:11:49 by jngew             #+#    #+#             */
/*   Updated: 2024/09/10 00:23:05 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free(t_stack	**list)
{
	t_stack	*temp;

	if (!list)
		return ;
	while (*list)
	{
		temp = (*list)->next;
		(*list)->number = 0;
		free (*list);
		*list = temp;
	}
}

void	ft_error(void)
{
	ft_printf("Error\n");
	exit(1);
}
