/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 12:53:07 by jngew             #+#    #+#             */
/*   Updated: 2024/06/22 12:47:32 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 42
#endif
/*
static char	*get_line(char *buffer)
{
	size_t	x;
	char	*remaining;

	x = 0;
	while (buffer[x] != '\0' && buffer[x] != '\n')
		x++;
	//printf("Debugging: get_line\n");
	//printf("Debug: buffer = \"%s\", x = %zu\n", buffer, x);
	if (buffer[x] == '\0' || buffer[x + 1] == '\0')
		return (NULL);
	if (buffer[x] == '\n')
		remaining = ft_substr(buffer, x + 1, (ft_strlen(buffer) - (x + 1)));
	else
		remaining = ft_substr(buffer, 0, x);
	if (remaining == NULL)
		return (NULL);
	//printf("Debug: remaining = \"%s\"\n", remaining);
	if (*remaining == '\0')
	{
		free (remaining);
		remaining = NULL;
	}
	buffer[x + 1] = '\0';
	//printf("Debug: buffer after processing = \"%s\"\n", buffer);
	//printf("Debugging: get_line END\n");
	return (remaining);
}
*/

static char	*read_buffer(int fd, char *remaining, char *buffer)
{
	ssize_t	bytes_read;

	bytes_read = 1;
	if (!remaining)
		remaining = ft_strdup("");
	while (bytes_read > 0)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		//printf("Debugging: read_buffer\n");
		//printf("Debug: bytes_read = %d\n", bytes_read);
		if (bytes_read == -1)
		{
			free (buffer);
			return (NULL);
		}
		// else if (bytes_read == 0)
		//	break ;
		buffer[bytes_read] = '\0';
		remaining = ft_strjoin(remaining, buffer);
		//printf("Debug: buffer read = \"%s\"\n", buffer);
		//temp = remaining;
		//remaining = ft_strjoin(temp, buffer);
		//printf("Debug: remaining after join = \"%s\"\n", remaining);
		//printf("Debugging: read_buffer END\n");
		//free (temp);
		//temp = NULL;
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	free (buffer);
	return (remaining);
}

static char	*new_buffer(char *buffer)
{
	char	*new_buffer;
	int		len;
	int		x;

	len = 0;
	x = 0;
	if (buffer == NULL)
		return (NULL);
	while (buffer[len] != '\n' && buffer[len])
		len++;
	if (buffer[len] == '\n')
		len++;
	new_buffer = (char *)malloc(sizeof(char) * (ft_strlen(buffer) - len + 1));
	if (!new_buffer)
		return (NULL);
	while (buffer[len + x])
	{
		new_buffer[x] = buffer[len + x];
		x++;
	}
	free (buffer);
	new_buffer[x] = '\0';
	return (new_buffer);
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
	//printf("Debug: %s\n", buffer);
	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
	{
		free (remaining);
		free (buffer);
		remaining = NULL;
		buffer = NULL;
		return (NULL);
	}
	if (!buffer)
		return (NULL);
	remaining = read_buffer(fd, remaining, buffer);
	// free (buffer);
	if (!remaining)
	{
		free (remaining);
		return (remaining = 0);
	}
	line = get_line(remaining, line);
	remaining = new_buffer(remaining);
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
