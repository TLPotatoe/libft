/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsspace.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlamit <titouan.lamit@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 16:58:04 by tlamit            #+#    #+#             */
/*   Updated: 2026/03/10 19:04:53 by tlamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strsspace(char **str)
{
	size_t	spaces_skipped;

	spaces_skipped = 0;
	while (ft_isspace(**str))
	{
		(*str)++;
		spaces_skipped++;
	}
	return (spaces_skipped);
}
