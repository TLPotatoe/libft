/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlamit <titouan.lamit@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 20:52:14 by tlamit            #+#    #+#             */
/*   Updated: 2026/04/01 16:09:42 by tlamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

static char	*extract_line(char **mbuff)
{
	size_t	len;
	char	*temp;
	char	*line;
	char	*end_line;

	end_line = gnl_ft_strchr(*mbuff, '\n');
	line = gnl_ft_strndup(*mbuff, end_line - *mbuff + 1);
	len = gnl_ft_strchr(end_line, 0) - end_line;
	temp = *mbuff;
	*mbuff = ft_strndup(end_line + 1, len);
	if (!*mbuff)
	{
		free(temp);
		free(line);
		return (NULL);
	}
	free(temp);
	return (line);
}

static int	reader(int fd, char **tbuff)
{
	int	len;

	*tbuff = malloc(GNL_BUFFER_SIZE_B + 1);
	if (!*tbuff)
		return (-1);
	len = read(fd, *tbuff, GNL_BUFFER_SIZE_B);
	return (len);
}

static void	freeall(char **mbuff, char **tbuff)
{
	free(*mbuff);
	*mbuff = NULL;
	free(*tbuff);
	*tbuff = NULL;
}

static int	ft_strlen_gnl(char *s)
{
	int	i;

	if (!s)
		return (-1);
	while (s[i])
		i++;
	return (i);
}

char	*get_next_line(int fd)
{
	static char	*mbuff[4096];
	char		*tbuff;
	char		*line;
	int			len;

	while (!ft_strchr(mbuff[fd], '\n'))
	{
		len = reader(fd, &tbuff);
		if (len == -1 || (!ft_strlen_gnl(mbuff[fd]) && len <= 0))
		{
			freeall(&(mbuff[fd]), &tbuff);
			return (NULL);
		}
		else if (!len)
		{
			free(tbuff);
			line = mbuff[fd];
			mbuff[fd] = NULL;
			return (line);
		}
		tbuff[len] = 0;
		mbuff[fd] = gnl_ft_strjoin(mbuff[fd], tbuff);
	}
	line = extract_line(&(mbuff[fd]));
	return (line);
}
