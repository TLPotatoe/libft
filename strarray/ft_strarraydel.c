/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strarraydel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlamit <titouan.lamit@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 14:41:02 by tlamit            #+#    #+#             */
/*   Updated: 2026/04/21 14:53:06 by tlamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strarray.h"

void	ft_strarraydel(char ***origin, size_t del_p)
{
	ft_strarrayndel(origin, del_p, 1);
}

void	ft_strarrayndel(char ***origin, size_t del_p, size_t n)
{
	size_t	i;
	size_t	len;

	len = ft_arraylen((void **)*origin);
	if (del_p >= len)
		return ;
	n = ft_min(n, len - del_p);
	i = 0;
	while (i < n)
		free((*origin)[del_p + i++]);
	i = del_p;
	while (i + n < len)
	{
		(*origin)[i] = (*origin)[i + n];
		i++;
	}
	while (i < len)
		(*origin)[i++] = NULL;
}
