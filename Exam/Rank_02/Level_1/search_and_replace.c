/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 17:27:44 by jngew             #+#    #+#             */
/*   Updated: 2024/08/13 17:38:00 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	x;

	x = 0;
	if (argc == 4 && !argv[2][1] && !argv[3][1])
	{
		while (argv[1][x] != '\0')
		{
			if (argv[1][x] == argv[2][0])
				argv[1][x] = argv[3][0];
			write (1, &argv[1][x], 1);
			x++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
