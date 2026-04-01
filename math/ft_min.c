/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlamit <titouan.lamit@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 15:53:19 by tlamit            #+#    #+#             */
/*   Updated: 2026/03/23 15:53:33 by tlamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

/**
 * @brief Returns the minimum of two size_t values.
 * @param a The first value.
 * @param b The second value.
 * @return The smaller value between a and b.
 */
size_t	ft_min(size_t a, size_t b)
{
	if (a < b)
		return (a);
	return (b);
}
