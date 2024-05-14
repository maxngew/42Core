/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 17:53:16 by jngew             #+#    #+#             */
/*   Updated: 2024/05/14 12:10:46 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isdigit(int x)
{
	if (x >= 48 && x <= 57)
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
	printf("%d\n", ft_isdigit(48));
	printf("%d\n", ft_isdigit(57));
	printf("%d\n", ft_isdigit(58));
	printf("%d\n", ft_isdigit(33));
	printf("%d\n", ft_isdigit(32));
}
*/
