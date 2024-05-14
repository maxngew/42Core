/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 18:11:49 by jngew             #+#    #+#             */
/*   Updated: 2024/05/14 12:13:00 by jngew            ###   ########.fr       */
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
