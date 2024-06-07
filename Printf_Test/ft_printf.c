/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 21:56:26 by jngew             #+#    #+#             */
/*   Updated: 2024/06/06 11:33:26 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	find_printf(const char *s, va_list *args, size_t *len)
{
	if (*s == '\0')
		return (0);
	else if (*s == 'c')
		return (ft_char(va_arg(*args, int), len));
	else if (*s == 's')
		return (ft_str(va_arg(*args, char *), len));
	else if (*s == 'p')
		return (ft_ptr(va_arg(*args, void *), len));
	else if (*s == 'd' || *s == 'i')
		return (ft_nbr(va_arg(*args, int), len));
	else if (*s == 'u')
		return (ft_unsignednbr(va_arg(*args, unsigned int), len));
	else if (*s == 'x')
		return (ft_hexlower(va_arg(*args, unsigned int), len));
	else if (*s == 'X')
		return (ft_hexupper(va_arg(*args, unsigned int), len));
	else if (*s == '%')
		return (ft_char('%', len));
	return (0);
}

static int	handle_percent(const char **format, va_list *args, size_t *len)
{
	int	ret;

	(*format)++;
	if (**format == '%')
	{
		if (ft_char('%', len) == -1)
			return (-1);
	}
	else
	{
		ret = find_printf(*format, args, len);
		if (ret == -1)
			return (-1);
	}
	(*format)++;
	return (0);
}

static int	handle_format(const char **format, va_list *args, size_t *len)
{
	while (**format)
	{
		if (**format == '%')
		{
			if (handle_percent(format, args, len) == -1)
				return (-1);
		}
		else
		{
			if (ft_char(**format, len) == -1)
				return (-1);
			(*format)++;
		}
	}
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list		args;
	int			ret;
	size_t		len;
	const char	*format;

	len = 0;
	va_start(args, str);
	format = str;
	ret = handle_format(&format, &args, &len);
	va_end(args);
	if (ret == -1)
		return (-1);
	return (len);
}
