/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 21:38:42 by jngew             #+#    #+#             */
/*   Updated: 2024/05/15 23:08:10 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	x;

	x = 0;
	while ((str1[x] || str2[x]) && x < n)
	{
		if ((unsigned char) str1[x] != (unsigned char) str2[x])
		{
			return ((unsigned char) str1[x] - (unsigned char) str2[x]);
		}x++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main()
{
	printf("%d\n", ft_strncmp("Hello", "Hello", 7));
	printf("%d\n", ft_strncmp("Hello", "He110", 3));
	printf("%d\n", ft_strncmp("Hello", "World", 5));
}
*/
