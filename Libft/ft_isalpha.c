/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: <jngew@student.42singapore.sg>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 16:25:28 by jngew             #+#    #+#             */
/*   Updated: 2024/05/20 12:49:45 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int x)
{
	if ((x >= 'A' && x <= 'Z')
		|| (x >= 'a' && x <= 'z'))
	{
		return (x);
	}
	else
		return (0);
}
/*
#include <unistd.h>
#include <stdio.h>

int	main()
{
	printf("%d\n", ft_isalpha(65));
	printf("%d\n", ft_isalpha(97));
	printf("%d\n", ft_isalpha(48));
	printf("%d\n", ft_isalpha(33));
	printf("%d\n", ft_isalpha(32));
	printf("%d\n", ft_isalpha(200));
	printf("%d\n", ft_isalpha(36));
}
*/
