/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strarraydup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlamit <titouan.lamit@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 15:18:08 by tlamit            #+#    #+#             */
/*   Updated: 2026/04/01 16:49:06 by tlamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strarray.h"

char	**ft_strarraydup(char **tabstr)
{
	char	**new_tabstr;
	size_t	list_len;
	int		index;

	list_len = ft_listlen(tabstr);
	new_tabstr = malloc(sizeof(char *) * (list_len + 1));
	if (!new_tabstr)
		return (NULL);
	new_tabstr[list_len] = NULL;
	index = 0;
	while (tabstr[index])
	{
		new_tabstr[index] = ft_strdup(tabstr[index]);
		if (!new_tabstr[index])
		{
			while (index + 1)
				free(new_tabstr[index--]);
			free(new_tabstr);
			return (NULL);
		}
		index++;
	}
	return (new_tabstr);
}
