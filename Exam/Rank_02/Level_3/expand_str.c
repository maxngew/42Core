/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 18:17:08 by jngew             #+#    #+#             */
/*   Updated: 2024/09/21 18:28:48 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	x;
	int	count;

	if (argc == 2)
	{
		x = 0;
		while (argv[1][x] == 32 || argv[1][x] == 9)
			x++;
		while (argv[1][x])
		{
			if (argv[1][x] == 32 || argv[1][x] == 9)
				count = 1;
			if (argv[1][x] != 32 && argv[1][x] != 9)
			{
				if (count)
					write (1, "   ", 3);
				count = 0;
				write (1, &argv[1][x], 1);
			}
			x++;
		}
	}
	write (1, "\n", 1);
	return (0);
}