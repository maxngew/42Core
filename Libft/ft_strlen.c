/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 18:36:19 by jngew             #+#    #+#             */
/*   Updated: 2024/05/13 18:40:26 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	return(x);
}

#include <stdio.h>

int	main()
{
	printf("%d\n", ft_strlen("abcde"));
	printf("%d\n", ft_strlen("1234567890"));
	printf("%d\n", ft_strlen(" "));
}
