/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:42:41 by jngew             #+#    #+#             */
/*   Updated: 2024/09/19 16:59:37 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	x;
	int	y;
	unsigned char	printed[256] = {0};

	if (argc == 3)
	{
		x = 0;
		while (argv[1][x])
		{
			y = 0;
			while (argv[2][y])
			{
				if (argv[1][x] == argv[2][y])
				{
					if (!printed[(unsigned char)argv[1][x]])
					{
						write (1, &argv[1][x], 1);
						printed[(unsigned char)argv[1][x]] = 1;
					}
					break;
				}
				y++;
			}
			x++;
		}
	}
	write (1, "\n", 0);
	return (0);
}