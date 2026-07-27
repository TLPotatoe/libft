/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlamit <titouan.lamit@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 16:21:27 by tlamit            #+#    #+#             */
/*   Updated: 2026/07/27 17:00:36 by tlamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../str/ft_str.h"
#include "reader.h"

static char	*ft_get_token(char **str, char c)
{
	size_t	len;
	char	*temp;
	char	*line;
	char	*end_line;

	end_line = ft_strchr(*str, c);
	temp = *str;
	if (end_line)
	{
		line = ft_strndup(*str, end_line - *str + 1);
		len = ft_strlen(end_line + 1);
		*str = ft_strndup(end_line + 1, len);
	}
	else
	{
		line = ft_strdup(*str);
		*str = NULL;
	}
	if (!line)
	{
		free(temp);
		return (NULL);
	}
	free(temp);
	return (line);
}

char	*ft_strtok(char **str, char c)
{
	if (!*str || !**str)
	{
		free(*str);
		*str = NULL;
		return (NULL);
	}
	return (ft_get_token(str, c));
}
