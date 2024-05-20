/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 18:40:54 by jngew             #+#    #+#             */
/*   Updated: 2024/05/20 12:53:08 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memset(void *str, int x, size_t n)
{
	unsigned char	*temp_x;

	temp_x = (unsigned char *)str;
	while (n > 0)
	{
		*(temp_x++) = (unsigned char) x;
		n--;
	}
	return (str);
}
/*
#include <stdio.h>
#include <string.h>

int	main()
{
	char str[50] = "Hello & Welcome World!";
	printf("Before memset: %s\n", str);

	ft_memset(str + 6, '.', 9);
	printf("After memset: %s\n", str);
	return (0);
}
*/
