/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 18:36:19 by jngew             #+#    #+#             */
/*   Updated: 2024/05/20 12:52:17 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t	ft_strlen(const char *str)
{
	size_t	x;

	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	return (x);
}
/*
#include <stdio.h>

int	main()
{
	printf("%zu\n", ft_strlen("abcde"));
	printf("%zu\n", ft_strlen("1234567890"));
	printf("%zu\n", ft_strlen(" "));
	printf("%zu\n", ft_strlen(""));
}
*/
