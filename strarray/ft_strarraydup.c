/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strarraydup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlamit <titouan.lamit@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 15:18:08 by tlamit            #+#    #+#             */
/*   Updated: 2026/04/01 18:08:51 by tlamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strarray.h"

char	**ft_strarraydup(char **strarray)
{
	char	**new_strarray;
	size_t	list_len;
	int		index;

	list_len = ft_arraylen((void **)strarray);
	new_strarray = malloc(sizeof(char *) * (list_len + 1));
	if (!new_strarray)
		return (NULL);
	new_strarray[list_len] = NULL;
	index = 0;
	while (strarray[index])
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
