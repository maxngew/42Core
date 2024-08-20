/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 17:42:17 by jngew             #+#    #+#             */
/*   Updated: 2024/05/23 20:34:56 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
		{
			return (1);
		}
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str_res;
	int		start;
	int		end;
	int		x;

	start = 0;
	end = ft_strlen(s1) - 1;
	if (!s1 || !set)
		return (NULL);
	while (s1[start] && check_set(s1[start], set))
		start++;
	while (end > start && check_set(s1[end], set))
		end--;
	str_res = (char *)malloc(sizeof(char) * (end - start + 1) + 1);
	if (!str_res)
		return (NULL);
	x = 0;
	while (start <= end)
		str_res[x++] = s1[start++];
	str_res[x] = '\0';
	return (str_res);
}
