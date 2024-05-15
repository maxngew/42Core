/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 20:20:47 by jngew             #+#    #+#             */
/*   Updated: 2024/05/15 21:08:00 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strchr(const char *str, int c)
{
	unsigned int	x;
	char	y;

	x = 0;
	y = (char) c;
	while (str[x])
	{
		if (str[x] == y)
		{
			return ((char *) &str[x]);
		}x++;
	}
	if (c == '\0')
	{
		return ((char *) &str[x]);
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main()
{
	const char str[] = "Hello! World!";
	const char c = ' ';
	char *ret;

	ret = ft_strchr(str, c);
	printf("String after %c is - %s\n", c, ret);
	return (0);
}
*/
