/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlamit <titouan.lamit@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 16:49:00 by tlamit            #+#    #+#             */
/*   Updated: 2026/04/02 16:13:26 by tlamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

static size_t always_pos(int i)
{
	if (i < 0)
		i = (i*-1+256);
	return (i);
}

void	ft_remchr(char *s, char *char_list)
{
	char	seen[512];
	int		i;
	int		j;

	if (!s || !char_list)
		return ;
	ft_memset(seen, 0, sizeof seen);
	while (*char_list)
		seen[always_pos((int)*(char_list++))] = 1;
	i = -1;
	j = 0;
	while (s[++i])
	{
		if (seen[always_pos((int)s[i])])
			continue ;
		s[j++] = s[i];
	}
	s[j] = 0;
}
