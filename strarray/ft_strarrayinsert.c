/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strarrayinsert.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlamit <titouan.lamit@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 15:50:44 by tlamit            #+#    #+#             */
/*   Updated: 2026/04/01 18:10:40 by tlamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strarray.h"

void	ft_strarrayinsert(char ***origin, size_t insert_p, char *str)
{
	size_t	len;

	if (!str)
		return ;
	len = ft_strlen(str);
	ft_strarrayninsert(origin, insert_p, str, len);
}

void	ft_strarrayninsert(char ***origin, size_t insert_p, char *str, size_t n)
{
	char	**new_origin;
	size_t	index;
	size_t	len;
	char	flag;

	len = ft_arraylen((void **)*origin) + 1;
	insert_p = ft_min(insert_p, len - 1);
	new_origin = malloc(sizeof(char *) * (len + 1));
	if (!new_origin)
		return ;
	new_origin[len] = NULL;
	index = 0;
	flag = 0;
	while (index < len)
	{
		if (index == insert_p)
		{
			new_origin[index] = ft_strndup(str, n);
			flag = 1;
		}
		if (*origin && (*origin)[index])
			new_origin[index + flag] = (*origin)[index];
		index++;
	}
	ft_swap_free((void **)origin, new_origin);
}
