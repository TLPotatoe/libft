/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strreplace.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlamit <titouan.lamit@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 01:28:03 by tlamit            #+#    #+#             */
/*   Updated: 2026/03/13 16:24:01 by tlamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**

	* @brief A function that replace all caractère of
	to_replace contained in source by replace_by.
 *
 * @param source The main string.
 * @param to_replace The string that contains the caracters to replace.
 * @param replace_by The caracter that will replace the others.
 */
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
