/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 22:11:44 by jngew             #+#    #+#             */
/*   Updated: 2024/08/30 16:45:15 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_numbers(int num)
{
	char	str[10] = "0123456789";

	if (num > 9)
		write_numbers(num/10);
	write (1, &str[num % 10], 1);
}

int	main(void)
{
	int	x;

	x = 1;
	while (x <= 100)
	{
		if (x % 3 == 0 && x % 5 == 0)
			write (1, "fizzbuzz", 8);
		else if (x % 3 == 0)
			write (1, "fizz", 4);
		else if (x % 5 == 0)
			write (1, "buzz", 4);
		else
			write_numbers(x);
		x++;
		write (1, "\n", 1);
	}
}
