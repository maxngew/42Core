/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 16:00:30 by jngew             #+#    #+#             */
/*   Updated: 2024/05/17 13:38:12 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*temp_dest;
	char	*temp_src;
	size_t	x;

	if (!dest || !src)
		return (NULL);
	temp_dest = (char *)dest;
	temp_src = (char *)src;
	x = 0;
	if (temp_dest > temp_src)
	{
		while (n-- > 0)
			temp_dest[n] = temp_src[n];
	}
	else
	{
		while (x++ < n)
			temp_dest[x] = temp_src[x];
	}
	return (dest);
}
/*
#include <stdio.h>

int	main()
{
	char str1[] = "0123456789";
	char str2[] = "abcdefghij";
	size_t n = sizeof(str1);

	printf("Before memmove - Str1: %s, Str2, %s\n", str1, str2);
	ft_memmove(str2, str1, n);
	printf("After memmove - Str1: %s, Str2, %s\n", str1, str2);
	return (0);
}
*/
