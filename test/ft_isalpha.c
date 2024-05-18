/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 16:25:28 by jngew             #+#    #+#             */
/*   Updated: 2024/05/18 12:51:09 by jngew            ###   ########.fr       */
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
