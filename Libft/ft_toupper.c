/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 19:42:00 by jngew             #+#    #+#             */
/*   Updated: 2024/05/20 12:55:33 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_toupper(int x)
{
	if (x >= 'a' && x <= 'z')
		x -= 32;
	return (x);
}
/*
#include <stdio.h>

int	main()
{
	char lowercase = 'a';
	printf("Lowercase: %c\n", lowercase);
	printf("Uppercase: %c\n", ft_toupper(lowercase));
	return (0);
}
*/
