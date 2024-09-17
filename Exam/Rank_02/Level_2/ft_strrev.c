/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 20:57:16 by jngew             #+#    #+#             */
/*   Updated: 2024/09/17 21:00:51 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		x;
	int		length;
	char	temp;

	x = -1;
	length = 0;
	while (str[length])
		length++;
	while (++x < length / 2)
	{
		temp = str[x];
		str[x] = str[length - 1 - x];
		str[length - 1 - x] = temp;
	}
	return (str);
}