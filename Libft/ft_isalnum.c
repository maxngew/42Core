/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 13:59:47 by jngew             #+#    #+#             */
/*   Updated: 2024/05/18 13:59:52 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isalnum(int x)
{
	if ((x >= 48 && x <= 57)
		|| (x >= 65 && x <= 90)
		|| (x >= 97 && x <= 122))
	{
		return (x);
	}
	else
		return (0);
}
/*
#include <stdio.h>

int	main()
{
	printf("%d\n", ft_isalnum(48));
	printf("%d\n", ft_isalnum(65));
	printf("%d\n", ft_isalnum(97));
	printf("%d\n", ft_isalnum(33));
	printf("%d\n", ft_isalnum(32));
	printf("%d\n", ft_isalnum(200));
	printf("%d\n", ft_isalnum(0));
}
*/
