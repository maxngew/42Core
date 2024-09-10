/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 18:06:41 by jngew             #+#    #+#             */
/*   Updated: 2024/09/01 18:28:35 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*rev_print(char *str)
{
	int	x;

	x = 0;
	while (str[x])
		x++;
	while (x > 0)
	{
		x--;
		write (1, &str[x], 1);
	}
	if (str[0])
		write (1, &str[0], 1);
	return (str);
}

int	main(void)
{
	rev_print("Hello world");
	write (1, "\n", 1);
	rev_print("tnirp esreveR");
	write (1, "\n", 1);
	rev_print("");
	write (1, "\n", 1);
}
