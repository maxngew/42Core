/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 17:04:03 by jngew             #+#    #+#             */
/*   Updated: 2024/09/01 18:48:47 by jngew            ###   ########.fr       */
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
			if ((argv[1][x] >= 'a' && argv[1][x] <= 'y') 
				|| (argv[1][x] >= 'A' && argv[1][x] <= 'Y'))
				argv[1][x] += 1;
			else if (argv[1][x] == 'z' || argv[1][x] == 'Z')
				argv[1][x] -= 25;
			write (1, &argv[1][x], 1);
			x++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
