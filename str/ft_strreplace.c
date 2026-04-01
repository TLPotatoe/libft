/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strreplace.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlamit <titouan.lamit@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 01:28:03 by tlamit            #+#    #+#             */
/*   Updated: 2026/04/01 16:46:50 by tlamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

void	ft_strreplace(char *source, char *to_replace, char replace_by)
{
	char	seen[256];

	if (!source || !to_replace)
		return ;
	ft_memset(seen, 0, sizeof seen);
	while (*to_replace)
		seen[(int)*(to_replace++)] = 1;
	while (*source)
	{
		if (seen[(int)(*source)])
			*source = replace_by;
		source++;
	}
}
