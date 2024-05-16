/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 20:32:28 by jngew             #+#    #+#             */
/*   Updated: 2024/05/16 21:13:16 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strnstr(const char *hay, const char *nee, size_t n)
{
	size_t	x;
	size_t	y;

	x = 0;
	if (nee[0] == 0)
		return ((char *)hay);
	while (hay[x] && x < n)
	{
		y = 0;
		while (hay[x + y] == nee[y] && hay[x + y] && x + y < n)
		{
			y++;
			if (nee[y] == '\0')
				return ((char *)hay + x);
		}
		x++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main()
{
	const char *hay = "Hello World!";
	const char *nee = "World";
	const char *nee1 = "!";
	size_t n = 13;
	size_t n1 = 5;

	char *res = ft_strnstr(hay, nee, n);
	char *res1 = ft_strnstr(hay, nee1, n);
	char *res2 = ft_strnstr(hay, nee1, n1);
	if (res)
		printf("Found: %s\n", res);
	else
		printf("Not found within the first %zu characters. \n", n);
	if (res1)
		printf("Found: %s\n", res1);
	else
		printf("Not found within the first %zu characters. \n", n);
	if (res2)
		printf("Found: %s\n", res2);
	else
		printf("Not found within the first %zu characters. \n", n1);
	return (0);
}
*/
