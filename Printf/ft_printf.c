/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 21:56:26 by jngew             #+#    #+#             */
/*   Updated: 2024/06/05 21:48:07 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	find_printf(const char *s, va_list *args, size_t *len)
{
	if (*s == 'c')
		ft_char(va_arg(*args, int), len);
	else if (*s == 's')
		ft_str(va_arg(*args, char *), len);
	else if (*s == 'p')
		ft_ptr(va_arg(*args, void *), len);
	else if (*s == 'd')
		ft_nbr(va_arg(*args, int), len);
	else if (*s == 'i')
		ft_nbr(va_arg(*args, int), len);
	else if (*s == 'u')
		ft_unsignednbr(va_arg(*args, unsigned int), len);
	else if (*s == 'x')
		ft_hexlower(va_arg(*args, unsigned int), len);
	else if (*s == 'X')
		ft_hexupper(va_arg(*args, unsigned int), len);
	else if (*s == '%')
		ft_char('%', len);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		x;
	size_t	len;

	x = 0;
	len = 0;
	va_start(args, str);
	while (str[x] != '\0')
	{
		if (str[x] == '%')
		{
			x++;
			find_printf(&str[x], &args, &len);
			x++;
		}
		else
		{
			ft_char(str[x], &len);
			x++;
		}
	}
	va_end(args);
	return (len);
}
