/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 13:09:30 by jngew             #+#    #+#             */
/*   Updated: 2024/05/20 12:53:27 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_bzero(void *str, size_t n)
{
	char	*temp_x;

	temp_x = (char *)str;
	while (n > 0)
	{
		*(temp_x++) = 0;
		n--;
	}
}
/*
#include <string.h>
#include <stdio.h>

int	main()
{
	char str[50] = "Hello World!";
	printf("Before bzero: %s\n", str);

	ft_bzero(str + 5, 5);
	printf("After bzero: %s\n", str);
	return (0);
}
*/
