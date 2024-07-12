/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 12:53:07 by jngew             #+#    #+#             */
/*   Updated: 2024/06/23 15:51:30 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 42
#endif

static char	*read_line(int fd, char *line, char *buffer)
{
	ssize_t	bytes_read;

	bytes_read = 1;
	if (!line)
		line = ft_strdup("");
	while (bytes_read > 0)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			free (buffer);
			free (line);
			return (NULL);
		}
		else if (bytes_read == 0)
			break ;
		buffer[bytes_read] = '\0';
		line = ft_strjoin(line, buffer);
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	free (buffer);
	return (line);
}

static char	*new_line(char	*line)
{
	int		len;
	int		x;
	char	*new_line;

	len = 0;
	x = 0;
	if (line == NULL)
		return (NULL);
	while (line[len] != '\n' && line[len])
		len++;
	if (line[len] == '\n')
		len++;
	new_line = malloc(sizeof(char) * (ft_strlen(line) - len + 1));
	if (!new_line)
		return (NULL);
	while (line[len + x])
	{
		new_line[x] = line[len + x];
		x++;
	}
	free (line);
	new_line[x] = '\0';
	return (new_line);
}

static char	*get_line(char *buffer, char *line)
{
	int	len;
	int	x;

	len = 0;
	x = 0;
	if (buffer == NULL)
		return (NULL);
	while (buffer[len] != '\n' && buffer[len])
		len++;
	if (buffer[len] == '\n')
		len++;
	line = (char *)malloc(sizeof(char) * (len + 1));
	if (!line)
		return (NULL);
	while (x < len)
	{
		line[x] = buffer[x];
		x++;
	}
	line[x] = '\0';
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*remaining;
	char		*line;
	char		*buffer;

	line = NULL;
	buffer = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (fd < 0 || BUFFER_SIZE <= 0)
	{
		free(remaining);
		free(buffer);
		remaining = NULL;
		buffer = NULL;
		return (NULL);
	}
	remaining = read_line(fd, remaining, buffer);
	if (!remaining || *remaining == 0)
	{
		free (remaining);
		return (remaining = 0);
	}
	line = get_line(remaining, line);
	if (!line)
		return (NULL);
	remaining = new_line(remaining);
	return (line);
}
/*
int	main(void)
{
	int fd;

	//fd = open("multiple_nl.txt", O_RDONLY);
	fd = open("variable_nls.txt", O_RDONLY);
    if (fd == -1)
    {
        perror("Error opening file");
        return 1;
    }
    char *line;
    while ((line = get_next_line(fd)) != NULL)
    {
        printf("Line: \"%s\"\n", line);
        printf("Allocated memory: %zu bytes\n", ft_strlen(line) + 1);
        free(line);
    }
    close(fd);
    return 0;
}
*/
