/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 16:16:48 by jngew             #+#    #+#             */
/*   Updated: 2024/08/30 17:23:42 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	x;
	int	count;

	x = 0;
	if (argc == 2)
	{
		while (argv[1][x])
		{
			if (argv[1][x] >= 'a' && argv[1][x] <= 'z')
				count = argv[1][x] - 'a' + 1;
			else if (argv[1][x] >= 'A' && argv[1][x] <= 'Z')
				count = argv[1][x] - 'A' + 1;
			else
				count = 1;
			while (count--)
				write (1, &argv[1][x], 1);
			x++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
