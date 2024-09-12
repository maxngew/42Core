/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_ft.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 16:32:19 by jngew             #+#    #+#             */
/*   Updated: 2024/09/11 21:39:40 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_addback(t_stack **stack, t_stack *stack_new)
{
	if (!stack)
		return ;
	if (!*stack)
		*stack = stack_new;
	else
		(ft_lstlast(*stack))->next = stack_new;
}

t_stact	*ft_newstack(int data)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (!new)
		ft_error ();
	new->number = data;
	new->next = NULL;
	return (new);
}

int	ft_atoi2(const char *str)
{
	int				mod;
	long long int	x;

	x = 0;
	mod = 1;
	while ((*str >= 9 && *str <= 13) || (*str == 32))
		str++;
	if (*str == '-')
	{
		mod = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str)
	{
		if (!ft_isdigit(*str))
			ft_error ();
		x = x * 10 + (*str - 48);
		str++;
	}
	if ((mod * x) > 2147483647 || (mod * x) < -2147483648)
		ft_error ();
	return (mod * x);
}

t_stack	*ft_subprocess(char **argv)
{
	t_stack	*a;
	char	**temp;
	int		x;
	int		y;

	a = NULL;
	x = 0;
	temp = ft_split(argv[1], 32);
	while (temp[x])
	{
		y = ft_atoi2(temp[x]);
		ft_addback(&a, ft_stacknew(y));
		x++;
	}
	ft_freestr(temp);
	free(temp);
	return (a);
}

t_stack	*ft_process(int argc, char **argv)
{
	t_stack	*a;
	int		x;
	int		y;

	x = 1;
	a = NULL;
	if (argc < 2)
		ft_error ();
	if (argc == 2)
		a = ft_subprocess(argv);
	else
	{
		while (x < argc)
		{
			y = ft_atoi2(argv[x]);
			ft_addback(&a, ft_stacknew(y));
			x++;
		}
	}
	return (a);
}
