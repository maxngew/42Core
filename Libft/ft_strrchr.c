/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 20:59:10 by jngew             #+#    #+#             */
/*   Updated: 2024/05/17 13:24:07 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strrchr(const char *str, int c)
{
	unsigned int	x;
	char			y;
	char			*result;

	x = 0;
	y = (char) c;
	result = NULL;
	while (str[x])
	{
		if (str[x] == y)
		{
			result = ((char *) &str[x]);
		}
		x++;
	}
	if (c == '\0')
	{
		result = ((char *) &str[x]);
	}
	return (result);
}
/*
#include <stdio.h>

int	main()
{
	const char str[] = "Hello! World!";
	const char c = 'o';
	char *ret;

	ret = ft_strrchr(str, c);
	printf("String from last %c is: %s\n", c, ret);
	return (0);
}
*/
