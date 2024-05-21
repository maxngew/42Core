/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 22:17:01 by jngew             #+#    #+#             */
/*   Updated: 2024/05/22 00:12:55 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H
#include <stddef.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_isalpha(int x);
size_t	ft_strlen(const char *str);
char	*ft_strdup(const char *s1);

char *ft_substr(char const *s, unsigned int start, size_t len);

#endif
