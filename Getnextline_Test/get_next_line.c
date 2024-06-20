/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 12:53:07 by jngew             #+#    #+#             */
/*   Updated: 2024/06/20 23:13:29 by jngew            ###   ########.fr       */
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
	printf("Debugging: get_line\n");
	printf("Debug: buffer = \"%s\", x = %zu\n", buffer, x);
	if (buffer[x] == '\0' || buffer[x + 1] == '\0')
		return (NULL);
	if (buffer[x] == '\n')
		remaining = ft_substr(buffer, x + 1, (ft_strlen(buffer) - (x + 1)));
	else
		remaining = ft_substr(buffer, 0, x);
	if (remaining == NULL)
		return (NULL);
	printf("Debug: remaining = \"%s\"\n", remaining);
	if (*remaining == '\0')
	{
		free (remaining);
		remaining = NULL;
	}
	buffer[x + 1] = '\0';
	printf("Debug: buffer after processing = \"%s\"\n", buffer);
	printf("Debugging: get_line END\n");
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
		printf("Debugging: read_buffer\n");
		printf("Debug: bytes_read = %d\n", bytes_read);
		if (bytes_read == -1)
		{
			free (remaining);
			return (NULL);
		}
		else if (bytes_read == 0)
			break ;
		buffer[bytes_read] = '\0';
		printf("Debug: buffer read = \"%s\"\n", buffer);
		if (!remaining)
			remaining = ft_strdup("");
		temp = remaining;
		remaining = ft_strjoin(temp, buffer);
		printf("Debug: remaining after join = \"%s\"\n", remaining);
		printf("Debugging: read_buffer END\n");
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
		remaining = NULL;
		free (buffer);
		return (NULL);
	}
	line = read_buffer(fd, remaining, buffer);
	free (buffer);
	if (!line)
	{
		free (remaining);
		remaining = NULL;
		return (NULL);
	}
	remaining = get_line(line);
	return (line);
}

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
