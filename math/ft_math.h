/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlamit <titouan.lamit@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 16:20:58 by tlamit            #+#    #+#             */
/*   Updated: 2026/04/01 16:21:29 by tlamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MATH_H
# define FT_MATH_H

# include <unistd.h>

/**
 * @brief Returns the minimum of two size_t values.
 * @param a The first value.
 * @param b The second value.
 * @return The smaller value between a and b.
 */
size_t	ft_min(size_t a, size_t b);

#endif // !FT_MATH_H