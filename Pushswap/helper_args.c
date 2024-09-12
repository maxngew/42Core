/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_args.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 22:51:53 by jngew             #+#    #+#             */
/*   Updated: 2024/09/11 23:24:42 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_freestr(char **list)
{
	char	*x;

	if (!list)
		return ;
	while (*list)
	{
		x = *list;
		list++;
		free (x);
	}
	*list = NULL;
}

void	list_args(char **argv, t_stack **stack_a)
{
	long	x;

	x = 1;
	while (argv[x] != NULL)
	{
		ft_addback(stack_a, ft_stacknew(ft_atoi(argv[x])));
		x++;
	}
}

t_stack	*ft_buildstack(int argc, char **argv)
{
	t_stack	*stack_a;
	int		x;
	int		y;

	x = 0;
	stack_a = NULL;
	if (argv < 2)
		ft_error ();
	else if (argc == 2)
		stack_a = ft_parse_args_quoted(argv);
	else
		list_args(argv, &stack_a);
	return (stack_a);
}

t_stack	*ft_buildstack_args(char **argv)
{
	t_stack	*stack_a;
	char	**temp;
	int		x;
	int		y;

	stack_a = NULL;
	x = 0;
	temp = ft_split(argv[1], 32);
	list_args(temp, &stack_a);
	ft_freestr(temp);
	free(temp);
	return (stack_a);
}
