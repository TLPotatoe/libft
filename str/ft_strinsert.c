/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strinsert.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlamit <titouan.lamit@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 15:37:17 by tlamit            #+#    #+#             */
/*   Updated: 2026/03/11 20:00:15 by tlamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Returns the minimum of two size_t values.
 * @param a The first value.
 * @param b The second value.
 * @return The smaller value between a and b.
 */
static size_t	ft_min(size_t a, size_t b)
{
	if (a < b)
		return (a);
	return (b);
}

/**
 * @brief Inserts a string into another at a given position.
 * @param str The original string.
 * @param to_insert The string to insert.
 * @param pos The index where the insertion begins.
 * @return A newly allocated string with the inserted characters,
	or NULL on failure.
 */
char	*ft_strinsert(char *str, char *to_insert, size_t pos)
{
	char	*ret;
	size_t	len_str;
	size_t	len_insert;

	if (!str && !to_insert)
		return (NULL);
	if (!to_insert)
		return (str);
	if (!str)
		return (to_insert);
	len_str = ft_strlen(str);
	len_insert = ft_strlen(to_insert);
	ret = malloc(sizeof(char) * (len_str + len_insert + 1));
	if (!ret)
		return (NULL);
	pos = ft_min(len_str, pos);
	ft_memcpy(ret, str, pos);
	ft_memcpy(ret + pos, to_insert, len_insert + 1);
	ft_memcpy(ret + pos + len_insert, str + pos, len_str - pos + 1);
	return (ret);
}

/**

	* @brief Inserts up to n characters from a string into another
	at a given position.
 * @param str The original string.
 * @param to_insert The string to insert.
 * @param pos The index where the insertion begins.
 * @param n The maximum number of bytes to insert from to_insert.
 * @return A newly allocated string with the inserted characters,
	or NULL on failure.
 */
char	*ft_strninsert(char *str, char *to_insert, size_t pos, size_t n)
{
	char	*ret;
	size_t	len_str;

	if (!str && !to_insert)
		return (NULL);
	if (!to_insert)
		return (str);
	if (!str)
		return (to_insert);
	len_str = ft_strlen(str);
	pos = ft_min(len_str, pos);
	n = ft_min(ft_strlen(to_insert), n);
	ret = malloc(sizeof(char) * (len_str + n + 1));
	if (!ret)
		return (NULL);
	ft_memcpy(ret, str, pos);
	ft_memcpy(ret + pos, to_insert, n);
	ft_memcpy(ret + pos + n, str + pos, len_str - pos + 1);
	return (ret);
}

/**
 * @brief Inserts a string into another at a given position,
	bounded by a maximum total length.
 * @param str The original string.
 * @param to_insert The string to insert.
 * @param pos The index where the insertion begins.

	* @param len The maximum total length of the resulting string
	(excluding the null terminator).
 * @return A newly allocated string bounded by len, or NULL on failure.
 */
char	*ft_strlinsert(char *str, char *to_insert, size_t pos, size_t len)
{
	char	*ret;
	size_t	len_str;
	size_t	len_ins;

	if (!str && !to_insert)
		return (NULL);
	if (!to_insert)
		return (str);
	if (!str)
		return (to_insert);
	len_str = ft_strlen(str);
	len_ins = ft_strlen(to_insert);
	pos = ft_min(pos, len_str);
	len = ft_min(len_str + len_ins, len);
	ret = malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (NULL);
	ft_memcpy(ret, str, ft_min(len, pos));
	if (len > pos)
		ft_memcpy(ret + pos, to_insert, ft_min(len - pos, len_ins));
	if (len > pos + len_ins)
		ft_memcpy(ret + pos + len_ins, str + pos, len - pos - len_ins);
	ret[len] = 0;
	return (ret);
}
