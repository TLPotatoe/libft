/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlamit <titouan.lamit@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 15:53:51 by tlamit            #+#    #+#             */
/*   Updated: 2026/04/01 17:22:40 by tlamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STR_H
# define FT_STR_H

# include "../is/ft_is.h"
# include "../mem/ft_mem.h"
# include "../math/ft_math.h"
# include <unistd.h>
# include <stdlib.h>

/**
 * @brief  Converts a string to an integer.
 *
 * @param  nptr  The string to convert.
 *
 * @return The integer value represented by the string.
 */
int		ft_atoi(const char *nptr);

/**
 * @brief  Converts an integer to a newly allocated string.
 *
 * @param  n  The integer to convert.
 *
 * @return A newly allocated string representing n, or NULL on failure.
 */
char	*ft_itoa(int n);

/**
 * @brief  Removes all occurrences of any character from char_list in s,
 *         modifying the string in place.
 *
 * @param  s          The string to modify.
 * @param  char_list  The set of characters to remove.
 *
 * @return void
 */
void	ft_remchr(char *s, char *char_list);

/**
 * @brief  Splits a string into a NULL-terminated array of substrings,
 *         using c as the delimiter.
 *
 * @param  s  The string to split.
 * @param  c  The delimiter character.
 *
 * @return A newly allocated array of strings, or NULL on failure.
 */
char	**ft_split(char const *s, char c);

/**
 * @brief  Locates the first occurrence of character c in string s.
 *
 * @param  s  The string to search.
 * @param  c  The character to locate.
 *
 * @return A pointer to the first occurrence of c, or NULL if not found.
 */
char	*ft_strchr(const char *s, int c);

/**
 * @brief  Duplicates a string into a newly allocated memory area.
 *
 * @param  s  The string to duplicate.
 *
 * @return A newly allocated copy of s, or NULL on failure.
 */
char	*ft_strdup(const char *s);

/**
 * @brief  Duplicates up to n characters of a string into a newly allocated
 *         memory area, always NULL-terminating the result.
 *
 * @param  s  The string to duplicate.
 * @param  n  Maximum number of characters to copy.
 *
 * @return A newly allocated copy of at most n characters of s,
 *         or NULL on failure.
 */
char	*ft_strndup(const char *s, size_t n);

/**
 * @brief  Inserts a string into another at a given position.
 *
 * @param  str        The original string.
 * @param  to_insert  The string to insert.
 * @param  pos        The index where the insertion begins.
 *
 * @return A newly allocated string with the inserted characters,
 *         or NULL on failure.
 */
char	*ft_strinsert(char *str, char *to_insert, size_t pos);

/**
 * @brief  Inserts up to n characters from a string into another
 *         at a given position.
 *
 * @param  str        The original string.
 * @param  to_insert  The string to insert.
 * @param  pos        The index where the insertion begins.
 * @param  n          Maximum number of bytes to insert from to_insert.
 *
 * @return A newly allocated string with the inserted characters,
 *         or NULL on failure.
 */
char	*ft_strninsert(char *str, char *to_insert, size_t pos, size_t n);

/**
 * @brief  Inserts a string into another at a given position,
 *         bounded by a maximum total length.
 *
 * @param  str        The original string.
 * @param  to_insert  The string to insert.
 * @param  pos        The index where the insertion begins.
 * @param  len        Maximum total length of the resulting string,
 *                    excluding the null terminator.
 *
 * @return A newly allocated string bounded by len, or NULL on failure.
 */
char	*ft_strlinsert(char *str, char *to_insert, size_t pos, size_t len);

/**
 * @brief  Applies function f to each character of string s,
 *         passing its index and a pointer to the character.
 *
 * @param  s  The string to iterate over.
 * @param  f  The function to apply to each character.
 *
 * @return void
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char *));

/**
 * @brief  Concatenates s1 and s2 into a newly allocated string, then
 *         frees both operands on success. If one operand is NULL, the
 *         other is returned as-is without being freed; if both are NULL,
 *         NULL is returned. Intended for accumulator patterns where both
 *         inputs are heap-allocated.
 *
 * @param  s1  The first string (freed on success).
 * @param  s2  The second string (freed on success).
 *
 * @return A newly allocated string containing s1 followed by s2,
 *         or NULL on allocation failure (operands are left untouched).
 */
char	*ft_strfajoin(char *s1, char *s2);

/**
 * @brief  Concatenates two strings into a newly allocated string.
 *
 * @param  s1  The first string.
 * @param  s2  The second string.
 *
 * @return A newly allocated string containing s1 followed by s2,
 *         or NULL on failure.
 */
char	*ft_strjoin(char const *s1, char const *s2);

/**
 * @brief  Appends src to dst, ensuring the result is at most size bytes
 *         including the null terminator.
 *
 * @param  dst   The destination buffer.
 * @param  src   The source string to append.
 * @param  size  The total size of the destination buffer.
 *
 * @return The total length that the resulting string would have had
 *         if size were large enough.
 */
size_t	ft_strlcat(char *dst, const char *src, size_t size);

/**
 * @brief  Copies src into dst, ensuring the result is null-terminated
 *         and at most size bytes including the null terminator.
 *
 * @param  dst   The destination buffer.
 * @param  src   The source string to copy.
 * @param  size  The total size of the destination buffer.
 *
 * @return The length of src.
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t size);

/**
 * @brief  Computes the length of a string, excluding the null terminator.
 *
 * @param  s  The string to measure.
 *
 * @return The number of characters in s.
 */
size_t	ft_strlen(const char *s);

/**
 * @brief  Applies function f to each character of s and returns a newly
 *         allocated string built from the results.
 *
 * @param  s  The string to map over.
 * @param  f  The function to apply to each character.
 *
 * @return A newly allocated transformed string, or NULL on failure.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/**
 * @brief  Compares up to n characters of two strings lexicographically.
 *
 * @param  s1  The first string.
 * @param  s2  The second string.
 * @param  n   Maximum number of characters to compare.
 *
 * @return Negative if s1 < s2, zero if equal, positive if s1 > s2.
 */
int		ft_strncmp(const char *s1, const char *s2, size_t n);

/**
 * @brief  Locates the first occurrence of little within the first len
 *         characters of big.
 *
 * @param  big     The string to search in.
 * @param  little  The substring to search for.
 * @param  len     Maximum number of characters to search.
 *
 * @return A pointer to the first occurrence of little in big,
 *         or NULL if not found.
 */
char	*ft_strnstr(const char *big, const char *little, size_t len);

/**
 * @brief  Locates the last occurrence of character c in string s.
 *
 * @param  s  The string to search.
 * @param  c  The character to locate.
 *
 * @return A pointer to the last occurrence of c, or NULL if not found.
 */
char	*ft_strrchr(const char *s, int c);

/**
 * @brief  Replaces all characters from to_replace found in source
 *         with replace_by, modifying the string in place.
 *
 * @param  source      The string to modify.
 * @param  to_replace  The set of characters to replace.
 * @param  replace_by  The character to substitute in their place.
 *
 * @return void
 */
void	ft_strreplace(char *source, char *to_replace, char replace_by);

/**
 * @brief  Splits a string into a NULL-terminated array of substrings,
 *         using any character from str as a delimiter.
 *
 * @param  s    The string to split.
 * @param  str  The set of delimiter characters.
 *
 * @return A newly allocated array of strings, or NULL on failure.
 */
char	**ft_strsplit(char const *s, char *str);

/**
 * @brief  Advances the string pointer past any leading whitespace characters.
 *
 * @param  str  Address of the string pointer to advance.
 *
 * @return The number of whitespace characters skipped.
 */
size_t	ft_strsspace(char **str);

/**
 * @brief  Trims all leading and trailing characters found in set from s1
 *         into a newly allocated string.
 *
 * @param  s1   The string to trim.
 * @param  set  The set of characters to remove.
 *
 * @return A newly allocated trimmed string, or NULL on failure.
 */
char	*ft_strtrim(char const *s1, char const *set);

/**
 * @brief  Extracts a substring from s starting at index start,
 *         of at most len characters, into a newly allocated string.
 *
 * @param  s      The source string.
 * @param  start  The starting index in s.
 * @param  len    Maximum number of characters to extract.
 *
 * @return A newly allocated substring, or NULL on failure.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len);

/**
 * @brief  Converts an uppercase character to its lowercase equivalent.
 *
 * @param  c  The character to convert.
 *
 * @return The lowercase equivalent of c, or c itself if not uppercase.
 */
int		ft_tolower(int c);

/**
 * @brief  Converts a lowercase character to its uppercase equivalent.
 *
 * @param  c  The character to convert.
 *
 * @return The uppercase equivalent of c, or c itself if not lowercase.
 */
int		ft_toupper(int c);

#endif // !FT_STR_H