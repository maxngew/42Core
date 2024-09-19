/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 17:23:44 by jngew             #+#    #+#             */
/*   Updated: 2024/09/19 17:37:03 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	last_word(char *str)
{
	int	x = 0;
	int	y = 0;

	while (str[x])
	{
		if (str[x] == 32 && str[x + 1] >= 33 && str[x + 1] <= 126)
			y = x + 1;
		x++;
	}
	while (str[y] >= 33 && str[y] <= 127)
	{
		write (1, &str[y], 1);
		y++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		last_word(argv[1]);
	write (1, "\n", 1);
	return (0);
}