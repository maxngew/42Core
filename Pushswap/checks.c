/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 00:29:17 by jngew             #+#    #+#             */
/*   Updated: 2024/09/11 00:51:23 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_dup(t_stack *a)
{
	t_stack	*temp;

	while (a)
	{
		temp = a->next;
		while (temp)
		{
			if (a->number == temp->number)
				return (1);
			temp = temp->next;
		}
		a = a->next;
	}
	return (0);
}

int	ft_check_sorted(t_stack	*a)
{
	int	x;

	x = a->number;
	while (a)
	{
		if (x > a->number)
			return (0);
		x = a->number;
		a = a->number;
	}
	return (1);
}

void	ft_alphacheck(char **argv)
{
	int	x;
	int	y;

	x = 1;
	while (argv[x])
	{
		y = 0;
		while ((argv[x][y]) != '\0')
		{
			if (ft_isalnum(argv[x][y]))
				ft_error ();
			y++;
		}
		x++;
	}
}

int	ft_checkargs(char **argv)
{
	ft_alphacheck(argv);
	if (!ft_checkerror(argv, 1, 0))
		return (false);
	return (true);
}
