/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlamit <titouan.lamit@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 16:33:53 by tlamit            #+#    #+#             */
/*   Updated: 2026/04/29 14:52:50 by tlamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ARRAY_H
# define FT_ARRAY_H

# include <stdlib.h>
# include <unistd.h>

/**
 * @brief Calculates the length of a NULL-terminated pointers array.
 * @param origin The pointers array to measure. Can be NULL.
 * @return The number of pointers in the array.
 */
size_t	ft_arraylen(void **origin);

/**
 * @brief  Frees a NULL-terminated array of pointers and the array itself.
 * Iterates through each element, frees it, and then frees
 * the array pointer.
 * @param  array  The NULL-terminated array of pointers to be freed.
 * @return Always returns NULL. Assigning the result back to the array
 * (e.g., array = ft_free_array(array)) is recommended to prevent
 * double-free errors.
 */
void	*ft_free_array(void **array);

/**
 * @brief  Removes the element at del_p from a NULL-terminated array of
 *         heap-allocated pointers in-place, freeing the element and
 *         shifting subsequent elements left. The array itself is not
 *         reallocated; the last slot is set to NULL.
 *         The array is passed as `void ***` so it can hold any pointer
 *         type (e.g. `char **`, `t_foo **`); cast at the call site.
 * @param  origin  Address of the array pointer.
 * @param  del_p   Index of the element to remove.
 * @return void
 */
void	ft_arraydel(void ***origin, size_t del_p);

/**
 * @brief  Removes n consecutive elements starting at del_p from a
 *         NULL-terminated array of heap-allocated pointers in-place,
 *         freeing each element and shifting the remainder left.
 *         The last n slots are set to NULL. If del_p is past the end,
 *         does nothing; n is clamped so it does not extend past the end.
 *         Generic over pointer type via `void ***`; cast at the call site.
 * @param  origin  Address of the array pointer.
 * @param  del_p   Index of the first element to remove.
 * @param  n       Number of consecutive elements to remove.
 * @return void
 */
void	ft_arrayndel(void ***origin, size_t del_p, size_t n);

#endif // !FT_ARRAY_H