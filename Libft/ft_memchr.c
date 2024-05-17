/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 15:55:04 by jngew             #+#    #+#             */
/*   Updated: 2024/05/17 13:24:52 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*str_x;
	unsigned char	y;
	size_t			x;

	str_x = (unsigned char *)str;
	y = (unsigned char)c;
	x = 0;
	while (x < n)
	{
		if (str_x[x] == y)
		{
			return ((void *) &str_x[x]);
		}
		x++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main()
{
	const char str[] = "Hello World!";
	const char c = 'o';
	char *results;

	results = ft_memchr(str, c, 15);
	printf("String after %c is %s\n", c, results);

	results = ft_memchr(str, c, 3);
	printf("String after %c is %s\n", c, results);
	return(0);
}
*/
