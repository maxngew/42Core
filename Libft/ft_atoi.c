/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 22:12:13 by jngew             #+#    #+#             */
/*   Updated: 2024/05/20 12:57:53 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	isspace(int x)
{
	if ((x >= 9 && x <= 13) || x == 32)
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	sign;
	int	results;
	int	x;

	sign = 1;
	results = 0;
	x = 0;
	while (isspace(str[x]))
		x++;
	if (str[x] == 43 && str[x + 1] != '-')
		x++;
	if (str[x] == '-')
	{
		sign = -1;
		x++;
	}
	while (str[x] >= 48 && str[x] <= 57 && str[x])
	{
		results *= 10;
		results += str[x] - 48;
		x++;
	}
	results *= sign;
	return (results);
}
/*
#include <stdio.h>

int	main()
{
	const char *test_cases[] = 
	{
		"123",
        "+456",
        "-789",
        "   101",
        "  +202",
        "  -303",
        "  404  ",
        "  +505abc",
        "  -606abc",
        "  707def",
		NULL
	};

	int x = 0;
	while (test_cases[x] != NULL)
	{
		printf("Input: %s\n", test_cases[x]);
		int	results = ft_atoi(test_cases[x]);
		printf("Output: %d\n\n", results);
		x++;
	}
	return (0);
}
*/
