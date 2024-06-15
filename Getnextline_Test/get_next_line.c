/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 12:53:07 by jngew             #+#    #+#             */
/*   Updated: 2024/06/15 16:54:56 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 42
#endif

static char	*get_line(char *buffer)
{
	size_t	x;
	char	*remaining;

	x = 0;
	while (buffer[x] != '\n' && buffer[x] != '\0')
		x++;
	if (buffer[x] == 0 || buffer[1] == 0)
		return (NULL);
	remaining = ft_substr(buffer, x + 1, ft_strlen(buffer) - x);
	if (*remaining == 0)
	{
		free (remaining);
		remaining = NULL;
	}
	buffer[x + 1] = '\0';
	return (remaining);
}

static char	*read_buffer(int fd, char *remaining, char *buffer)
{
	int		bytes_read;
	char	*temp;

	bytes_read = 1;
	while (bytes_read > 0)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			free (remaining);
			return (NULL);
		}
		else if (bytes_read == 0)
			break ;
		buffer[bytes_read] = '\0';
		if (!remaining)
			remaining = ft_strdup("");
		temp = remaining;
		remaining = ft_strjoin(temp, buffer);
		free (temp);
		if (!remaining)
			return (NULL);
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	return (remaining);
}

char	*get_next_line(int fd)
{
	static char	*remaining;
	char		*line;
	char		*buffer;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
	{
		if (remaining)
		{
			free (remaining);
			remaining = NULL;
		}
		return (NULL);
	}
	buffer = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	line = read_buffer(fd, remaining, buffer);
	free (buffer);
	buffer = NULL;
	if (!line)
	{
		if (remaining)
		{
			free (remaining);
			remaining = NULL;
		}
		return (NULL);
	}
	remaining = get_line(line);
	return (line);
}
