/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 18:24:34 by jngew             #+#    #+#             */
/*   Updated: 2024/05/13 18:32:26 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isprint(char	*str)
{
	int	x;

	x = 0;
	if (str[x] == '\0')
		return (0);
	while (str[x] != '\0')
	{
		if(!(str[x] >= 32 && str[x] <= 126))
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
	printf("%d\n", ft_isprint("abcde"));
	printf("%d\n", ft_isprint("ABCDE"));
	printf("%d\n", ft_isprint("12345"));
	printf("%d\n", ft_isprint(" !@!#"));
	printf("%d\n", ft_isprint("	"));
}
