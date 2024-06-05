/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_files.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 16:08:52 by jngew             #+#    #+#             */
/*   Updated: 2024/06/05 18:25:40 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void	test_char()
{
	printf("Testing ft_char:\n");
	size_t	len;
	int		x;

	len = 0;
	x = 97;
	ft_printf("Testing1: 'a', printed: %c, length: %zu\n", x, len);
	
	printf("Testing ft_char: DONE\n");
	printf("\n");
}

int	main()
{
	test_char();
	return (0);
}
