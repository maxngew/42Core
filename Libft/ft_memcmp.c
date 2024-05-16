/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 16:56:10 by jngew             #+#    #+#             */
/*   Updated: 2024/05/16 17:10:31 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*str_x;
	unsigned char	*str_y;
	size_t	x;

	str_x = (unsigned char *)str1;
	str_y = (unsigned char *)str2;
	x = 0;
	while (x < n)
	{
		if ((unsigned char)str_x[x] != (unsigned char)str_y[x])
		{
			return ((unsigned char)str_x[x] - (unsigned char)str_y[x]);
		}x++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main()
{
	printf("The difference is: %d\n", ft_memcmp("Hello", "Hello", 7));
	printf("The difference is: %d\n", ft_memcmp("Hello", "He110", 5));
	printf("The difference is: %d\n", ft_memcmp("Hello", "World", 3));
}
*/
