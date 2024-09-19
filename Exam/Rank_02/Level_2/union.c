/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 18:21:39 by jngew             #+#    #+#             */
/*   Updated: 2024/09/19 18:28:01 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	x = 0;
	int	y = 0;
	unsigned char printed[256] = {0};

	if (argc == 3)
	{
		while (argv[1][x])
		{
			if (!printed[(unsigned char)argv[1][x]])
			{
				write (1, &argv[1][x], 1);
				printed[(unsigned char)argv[1][x]] = 1;
			}
			x++;
		}
		while (argv[2][y])
		{
			if (!printed[(unsigned char)argv[2][y]])
			{
				write (1, &argv[2][y], 1);
				printed[(unsigned char)argv[2][y]] = 1;
			}
			y++;
		}
	}
	write (1, "\n", 1);
	return (0);
}