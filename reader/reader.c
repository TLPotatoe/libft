/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reader.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlamit <titouan.lamit@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 14:43:22 by tlamit            #+#    #+#             */
/*   Updated: 2026/04/01 16:05:48 by tlamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "reader.h"

static void	free_buff_line(char **line, char **buff)
{
	free(*line);
	free(*buff);
}

char	*ft_get_raw_file(char *filename)
{
	int		fd;
	int		len;
	char	*line;
	char	*buffer;

	fd = open(filename, O_RDONLY);
	if (fd < 2)
		return (NULL);
	line = NULL;
	while (1)
	{
		buffer = malloc(RAW_BUFFER_SIZE + 1);
		if (!buffer)
			free_buff_line(&line, &buffer);
		len = read(fd, buffer, RAW_BUFFER_SIZE);
		if (!len)
			break ;
		buffer[len] = 0;
		line = gnl_ft_strjoin(line, buffer);
	}
	free(buffer);
	close(fd);
	return (line);
}
