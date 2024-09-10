/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 00:57:55 by jngew             #+#    #+#             */
/*   Updated: 2024/09/11 01:01:44 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	x;

	x = 0;
	if (argc == 2)
	{
		while (argv[1][x])
		{
			if (argv[1][x] >= 'A' && argv[1][x] <= 'Z')
			{
				argv[1][x] = argv[1][x] + 32;
				write (1, "_", 1);
			}
			write (1, &argv[1][x], 1);
			x++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
