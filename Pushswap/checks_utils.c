/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 16:00:22 by jngew             #+#    #+#             */
/*   Updated: 2024/09/11 16:13:20 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_sign(int x)
{
	if (x == '+' || x == '-')
		return (1);
	return (0);
}

int	check_space(int x)
{
	if (x == ' ')
		return (1);
	return (0);
}

int	ft_checkerror(char **argv, int x, int y)
{
	while (argv[x])
	{
		y = 0;
		while ((argv[x][y] != '\0'))
		{
			if (check_sign(argv[x][y]))
			{
				y++;
				if (!ft_isdigit(argv[x][y]))
					return (false);
			}
			else if (ft_isdigit(argv[x][y]))
			{
				y++;
				if (argv[x][y] == '\0')
					break ;
				if (!ft_isdigit(argv[x][y] && !check_space(argv[x][y])))
					return (false);
			}
			y++;
		}
		x++;
	}
	return (true);
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
