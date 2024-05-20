/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 10:23:31 by jngew             #+#    #+#             */
/*   Updated: 2024/05/20 12:51:21 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isascii(int x)
{
	if (x >= 0 && x <= 127)
	{
		return (x);
	}
	return (0);
}
/*
#include <stdio.h>

int	main()
{
	printf("%d\n", ft_isascii(0));
	printf("%d\n", ft_isascii(32));
	printf("%d\n", ft_isascii(48));
	printf("%d\n", ft_isascii(127));
	printf("%d\n", ft_isascii(200));
}
*/
