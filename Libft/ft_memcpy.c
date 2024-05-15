/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 17:20:35 by jngew             #+#    #+#             */
/*   Updated: 2024/05/15 19:38:47 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*temp_dest;
	unsigned char	*temp_src;

	if (!dest || !src)
		return (dest);

	temp_dest = (unsigned char *)dest;
	temp_src = (unsigned char *)src;
	while (n > 0)
	{
		*(temp_dest++) = *(temp_src++);
		n--;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main()
{
	char dest[50] = "Waiting for Input";
	char dest1[50] = "Hello World!";
	char src[50] = "Goodbye World!";
	size_t n = 20;

	ft_memcpy(dest, src, n);
	printf("Original: %s\n", src);
	printf("Copied: %s\n", dest);

	ft_memcpy(dest, dest1, n);
	printf("\nOrignal: %s\n", dest);
	printf("Copied: %s\n", dest1);
	return (0);
}
*/
