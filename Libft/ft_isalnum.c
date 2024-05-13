/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 18:11:49 by jngew             #+#    #+#             */
/*   Updated: 2024/05/13 18:24:04 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isalnum(char *str)
{
	int	x;

	x = 0;
	if (str[x] == '\0')
		return (0);
	while (str[x] != '\0')
	{
		if ((str[x] >= 48 && str[x] <= 57)
			|| (str[x] >= 65 && str[x] <= 90)
				|| (str[x] >= 97 && str[x] <= 122))
		{
			x++;
		}
		else
			return (0);
	}
	return (1);
}

#include <stdio.h>

int	main()
{
	printf("%d\n", ft_isalnum("abcde"));
	printf("%d\n", ft_isalnum("ABCDE"));
	printf("%d\n", ft_isalnum("12345"));
	printf("%d\n", ft_isalnum("!@@#$"));
	printf("%d\n", ft_isalnum(" "));
}
