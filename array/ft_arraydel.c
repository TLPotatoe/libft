/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraydel.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlamit <titouan.lamit@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 16:20:00 by tlamit            #+#    #+#             */
/*   Updated: 2026/04/22 16:14:17 by tlamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../math/ft_math.h"
#include "ft_array.h"

void	ft_arraydel(void ***origin, size_t del_p)
{
	ft_arrayndel(origin, del_p, 1);
}

void	ft_arrayndel(void ***origin, size_t del_p, size_t n)
{
	size_t	i;
	size_t	len;

	len = ft_arraylen(*origin);
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
