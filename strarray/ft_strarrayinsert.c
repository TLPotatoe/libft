/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_listinsert.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlamit <titouan.lamit@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 15:50:44 by tlamit            #+#    #+#             */
/*   Updated: 2026/03/23 16:57:57 by tlamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_listinsert(char ***origin, size_t insert_p, char *str)
{
	size_t	len;

	if (!str)
		return ;
	len = ft_strlen(str);
	ft_listninsert(origin, insert_p, str, len);
}

void ft_listninsert(char ***origin, size_t insert_p, char *str, size_t n)
{
	char	**new_origin;
	size_t	index;
	size_t	len;
	char	flag;

	len = ft_listlen(*origin) + 1;
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
	free(*origin);
	*origin = new_origin;
}
