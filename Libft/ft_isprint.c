/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 18:24:34 by jngew             #+#    #+#             */
/*   Updated: 2024/05/20 12:51:53 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isprint(int x)
{
	if (x >= 32 && x <= 126)
	{
		return (x);
	}
	return (0);
}
/*
#include <stdio.h>

int	main()
{
	printf("%d\n", ft_isprint(32));
	printf("%d\n", ft_isprint(48));
	printf("%d\n", ft_isprint(97));
	printf("%d\n", ft_isprint(127));
	printf("%d\n", ft_isprint(0));
}
*/
