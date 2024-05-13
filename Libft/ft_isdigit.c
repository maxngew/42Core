/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 17:53:16 by jngew             #+#    #+#             */
/*   Updated: 2024/05/13 18:09:45 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isdigit(char *str)
{
	int	x;

	x = 0;
	if (str[x] == '\0')
	{
		return (0);
	}
	while (str[x] != '\0')
	{
		if (!(str[x] >= '0' && str[x] <= '9'))
		{
			return (0);
		}
		x++;
	}
	return (1);
}

#include <stdio.h>

int	main()
{
	printf("%d\n", ft_isdigit("12345"));
	printf("%d\n", ft_isdigit("abcde"));
	printf("%d\n", ft_isdigit("123de"));
	printf("%d\n", ft_isdigit("!@#$%"));
	printf("%d\n", ft_isdigit(" "));
}
