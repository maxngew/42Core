/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 13:08:30 by jngew             #+#    #+#             */
/*   Updated: 2024/06/25 20:32:34 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>
# include <string.h>

int		ft_printf(const char *str, ...);
void	ft_char(int c, size_t *len);
void	ft_str(char *str, size_t *len);
void	ft_ptr(void *ptr, size_t *len);
void	ft_nbr(int n, size_t *len);
void	ft_unsignednbr(unsigned int n, size_t *len);
void	ft_hexlower(unsigned int n, size_t *len);
void	ft_hexupper(unsigned int n, size_t *len);

#endif
