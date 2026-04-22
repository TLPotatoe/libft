/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reader.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlamit <titouan.lamit@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 14:43:22 by tlamit            #+#    #+#             */
/*   Updated: 2026/04/22 16:25:00 by tlamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "reader.h"

static int	read_chunk(int fd, char **line)
{
	char	*buffer;
	int		len;

	buffer = malloc(RAW_BUFFER_SIZE + 1);
	if (!buffer)
		return (-1);
	len = read(fd, buffer, RAW_BUFFER_SIZE);
	if (len <= 0)
	{
		free(buffer);
		return (0);
	}
	buffer[len] = 0;
	*line = gnl_ft_strjoin(*line, buffer);
	return (1);
}

char	*ft_get_raw_file(char *filename)
{
	int		fd;
	int		status;
	char	*line;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (NULL);
	line = NULL;
	status = 1;
	while (status > 0)
		status = read_chunk(fd, &line);
	close(fd);
	if (status < 0)
	{
		free(line);
		return (NULL);
	}
	return (line);
}
