/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_files.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 16:08:52 by jngew             #+#    #+#             */
/*   Updated: 2024/06/07 16:25:03 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main()
{
	ft_printf("Testing ft_printf:\n");
	ft_printf("\n");
	
	int	age;
	int	*ptr;
	int	x;

	age = 33;
	x = 2024;
	ft_printf("My name is %s, and I am %d years old. \n", "Max", age);
	ft_printf("The address of the pointer, ptr: %p\n", ptr);
	ft_printf("The year is: %i\n", x);
	ft_printf("Hello %s!\n", "");
	ft_printf("Value: %d\n", 0);
	ft_printf("Null test: %c\n", '\0');
	ft_printf("100%% \n");
	ft_printf("Hex Lowercase: %x\n", 255);
	ft_printf("Hex Uppercase: %X\n", 255);
	ft_printf("Hex LC with Zero: %x\n", 0);
	ft_printf("Hex UC with ZeroL %X\n", 0);
	ft_printf("Unsigned int: %u\n", 4294967295u);
	ft_printf("Unsigned int zero: %u\n", 0);
	ft_printf(" %p %p ", 0, 0);

	ft_printf("\n");
	ft_printf("Testing ft_printf: DONE\n");
	return (0);
}
