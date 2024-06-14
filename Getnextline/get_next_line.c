/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 12:53:07 by jngew             #+#    #+#             */
/*   Updated: 2024/06/14 16:35:14 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 42
#endif

static char	*get_line(char *buffer)
{
	size_t	x;

	x = 0;
	if (buffer[x] == '\0')
		return (NULL);
	while (buffer[x] && buffer[x] != '\n')
		x++;
	if (buffer[x] != '\n')
		x++;
	return (ft_substr(buffer, 0, x));
}

static char	*new_line(char *buffer)
{
	size_t	x;
	size_t	len;
	char	*new_buf;

	x = 0;
	while (buffer[x] && buffer[x] != '\n')
		x++;
	if (buffer[x] == '\0')
	{
		free (buffer);
		return (NULL);
	}
	len = ft_strlen(buffer) - x - 1;
	new_buf = ft_substr(buffer, x + 1, len);
	free (buffer);
	return (new_buf);
}

static char	*read_buffer(int fd, char *buffer, char *buf)
{
	int		bytes_read;
	char	*temp;

	bytes_read = 1;
	while (!ft_strchr(buffer, '\n') && bytes_read > 0)
	{
		bytes_read = read(fd, buf, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			free (buffer);
			return (NULL);
		}
		buf[bytes_read] = '\0';
		temp = ft_strjoin(buffer, buf);
		if (!temp)
		{
			free(buffer);
			return (NULL);
		}
		free (buffer);
		buffer = temp;
	}
	return (buffer);
}

char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*line;
	char		*buf;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (!buffer)
		buffer = ft_strdup("");
	buf = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (NULL);
	buffer = read_buffer(fd, buffer, buf);
	free (buf);
	if (!buffer)
		return (NULL);
	line = get_line(buffer);
	buffer = new_line(buffer);
	return (line);
}
