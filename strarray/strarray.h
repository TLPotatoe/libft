/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strarray.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlamit <titouan.lamit@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 15:47:55 by tlamit            #+#    #+#             */
/*   Updated: 2026/04/01 15:50:44 by tlamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#ifndef STRARRAY_H
# define STRARRAY_H


/**
 * @brief  Duplicates a NULL-terminated array of strings.
 *         Allocates a new array and copies each string using ft_strdup.
 *         On allocation failure, frees all previously allocated memory.
 * @param  tabstr  Source array of strings, terminated by a NULL pointer.
 * @return Pointer to the newly duplicated array,
 *         or NULL if any memory allocation fails.
 */
char	**ft_strarraydup(char **tabstr);

/**
 * @brief Creates a new string array with a duplicated string inserted.
 * @param origin The original string array. Can be NULL.
 * @param insert_p The index where the string will be inserted.
 * @param str The string to duplicate and insert.
 * @return A newly allocated string array, or NULL if allocation fails.
 */
char	**ft_newstrarrayinsert(char **origin, size_t insert_p, char *str);

/**

	* @brief Creates a new string array with a duplicated string
	(up to n chars) inserted.
 * @param origin The original string array. Can be NULL.
 * @param insert_p The index where the string will be inserted.
 * @param str The string to duplicate and insert.
 * @param n The maximum number of characters to copy from str.
 * @return A newly allocated string array, or NULL if allocation fails.
 */
char	**ft_newstrarrayninsert(char **origin, size_t insert_p, char *str, size_t n);

/**
 * @brief  Inserts a duplicated string into a string array at a given index,
 *         freeing the original array and reassigning the pointer.
 * @param  origin    Address of the original string array. Can point to NULL.
 * @param  insert_p  Index where the string will be inserted.
 * @param  str       The string to duplicate and insert.
 * @return void
 */
void ft_listinsert(char ***origin, size_t insert_p, char *str);


/**
 * @brief  Inserts a duplicated string (up to n chars) into a string array
 *         at a given index, freeing the original array and reassigning
 *         the pointer.
 * @param  origin    Address of the original string array. Can point to NULL.
 * @param  insert_p  Index where the string will be inserted.
 * @param  str       The string to duplicate and insert.
 * @param  n         Maximum number of characters to copy from str.
 * @return void
 */
void ft_listninsert(char ***origin, size_t insert_p, char *str, size_t n);

#endif // !STRARRAY_H