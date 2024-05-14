/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 18:24:34 by jngew             #+#    #+#             */
/*   Updated: 2024/05/14 12:12:51 by jngew            ###   ########.fr       */
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
