/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mem.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlamit <titouan.lamit@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 16:18:48 by tlamit            #+#    #+#             */
/*   Updated: 2026/04/01 17:19:13 by tlamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MEM_H
# define FT_MEM_H

# include <unistd.h>
# include <stdlib.h>

/**
 * @brief  Sets n bytes of memory at address s to zero.
 *
 * @param  s  Pointer to the memory area to zero out.
 * @param  n  Number of bytes to set to zero.
 *
 * @return void
 */
void	ft_bzero(void *s, size_t n);

/**
 * @brief  Allocates memory for an array of nmemb elements of size bytes each,
 *         and initializes all bytes to zero.
 *
 * @param  nmemb  Number of elements to allocate.
 * @param  size   Size in bytes of each element.
 *
 * @return A pointer to the allocated zero-initialized memory,
 *         or NULL on failure.
 */
void	*ft_calloc(size_t nmemb, size_t size);

/**
 * @brief  Searches the first n bytes of memory at address s
 *         for the first occurrence of byte c.
 *
 * @param  s  Pointer to the memory area to search.
 * @param  c  The byte value to locate.
 * @param  n  Number of bytes to search.
 *
 * @return A pointer to the first occurrence of c,
 *         or NULL if not found within n bytes.
 */
void	*ft_memchr(const void *s, int c, size_t n);

/**
 * @brief  Compares the first n bytes of two memory areas lexicographically.
 *
 * @param  s1  Pointer to the first memory area.
 * @param  s2  Pointer to the second memory area.
 * @param  n   Number of bytes to compare.
 *
 * @return Negative if s1 < s2, zero if equal, positive if s1 > s2.
 */
int		ft_memcmp(const void *s1, const void *s2, size_t n);

/**
 * @brief  Copies n bytes from memory area src to memory area dest.
 *         The memory areas must not overlap.
 *
 * @param  dest  Pointer to the destination memory area.
 * @param  src   Pointer to the source memory area.
 * @param  n     Number of bytes to copy.
 *
 * @return A pointer to dest.
 */
void	*ft_memcpy(void *dest, const void *src, size_t n);

/**
 * @brief  Copies n bytes from memory area src to memory area dest,
 *         handling overlapping memory areas correctly.
 *
 * @param  dest  Pointer to the destination memory area.
 * @param  src   Pointer to the source memory area.
 * @param  n     Number of bytes to copy.
 *
 * @return A pointer to dest.
 */
void	*ft_memmove(void *dest, const void *src, size_t n);

/**
 * @brief  Fills the first n bytes of memory at address s with byte value c.
 *
 * @param  s  Pointer to the memory area to fill.
 * @param  c  The byte value to set.
 * @param  n  Number of bytes to fill.
 *
 * @return A pointer to s.
 */
void	*ft_memset(void *s, int c, size_t n);
#endif // !FT_MEM_H