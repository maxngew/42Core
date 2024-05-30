/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 17:02:08 by jngew             #+#    #+#             */
/*   Updated: 2024/05/23 17:33:49 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str_res;
	int		x;
	int		y;

	x = 0;
	y = 0;
	str_res = (char *)malloc(sizeof(char) * (ft_strlen(s1)
				+ ft_strlen(s2) + 1));
	if (!str_res)
		return (NULL);
	while (s1[x])
		str_res[y++] = s1[x++];
	x = 0;
	while (s2[x])
		str_res[y++] = s2[x++];
	str_res[y] = '\0';
	return (str_res);
}
