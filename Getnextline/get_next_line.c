/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 12:53:07 by jngew             #+#    #+#             */
/*   Updated: 2024/06/22 00:34:59 by jngew            ###   ########.fr       */
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
	while (buffer[x] != '\0' && buffer[x] != '\n')
		x++;
	if (buffer[x] == '\0' || buffer[x + 1] == '\0')
		return (NULL);
	if (buffer[x] == '\n')
		remaining = ft_substr(buffer, x + 1, (ft_strlen(buffer) - (x + 1)));
	else
		remaining = ft_substr(buffer, 0, x);
	if (remaining == NULL)
		return (NULL);
	if (*remaining == '\0')
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
		temp = NULL;
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

	buffer = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (fd < 0 || BUFFER_SIZE <= 0 || !buffer || read(fd, 0, 0) < 0)
	{
		free (remaining);
		free (buffer);
		remaining = NULL;
		buffer = NULL;
		return (NULL);
	}
	line = read_buffer(fd, remaining, buffer);
	free (buffer);
	if (!line)
		return (NULL);
	remaining = get_line(line);
	return (line);
}
