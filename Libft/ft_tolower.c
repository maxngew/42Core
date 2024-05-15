/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 19:53:38 by jngew             #+#    #+#             */
/*   Updated: 2024/05/15 19:57:10 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_tolower(int x)
{
	if (x >= 'A' && x <= 'Z')
		x += 32;
	return (x);
}
/*
#include <stdio.h>

int	main()
{
	char uppercase = 'A';
	printf("Uppercase: %c\n", uppercase);
	printf("Lowercase: %c\n", ft_tolower(uppercase));
}
*/
