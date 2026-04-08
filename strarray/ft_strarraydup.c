/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strarraydup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlamit <titouan.lamit@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 15:18:08 by tlamit            #+#    #+#             */
/*   Updated: 2026/04/08 16:54:08 by tlamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strarray.h"

char	**ft_strarraydup(char **strarray)
{
	char	**new_strarray;

	new_strarray = ft_strarrayndup(strarray, ft_arraylen((void **)strarray));
	return (new_strarray);
}

char	**ft_strarrayndup(char **strarray, size_t n)
{
	char	**new_strarray;
	size_t	list_len;
	int		index;

	list_len = ft_min(ft_arraylen((void **)strarray), n);
	new_strarray = malloc(sizeof(char *) * (list_len + 1));
	if (!new_strarray)
		return (NULL);
	new_strarray[list_len] = NULL;
	index = 0;
	while (strarray[index] && index < (int)n)
	{
		new_strarray[index] = ft_strdup(strarray[index]);
		if (!new_strarray[index])
		{
			while (index + 1)
				free(new_strarray[index--]);
			free(new_strarray);
			return (NULL);
		}
		index++;
	}
	return (new_strarray);
}
