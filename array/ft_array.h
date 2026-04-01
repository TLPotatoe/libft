/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlamit <titouan.lamit@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 16:33:53 by tlamit            #+#    #+#             */
/*   Updated: 2026/04/01 17:17:20 by tlamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ARRAY_H
# define FT_ARRAY_H

# include <unistd.h>
# include <stdlib.h>

/**
 * @brief Calculates the length of a NULL-terminated pointers array.
 * @param origin The pointers array to measure. Can be NULL.
 * @return The number of pointers in the array.
 */
size_t	ft_arraylen(void **origin);

/**
 * @brief  Frees a NULL-terminated array of pointers and the array itself.
 *         Iterates through each element, frees it,
	then frees the array pointer.
 * @param  array  Array of pointers to free, terminated by a NULL pointer.
 * @return void
 */
void	ft_free_array(void **array);

#endif // !FT_ARRAY_H