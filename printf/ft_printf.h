/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlamit <titouan.lamit@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 15:00:30 by tlamit            #+#    #+#             */
/*   Updated: 2026/04/01 16:17:40 by tlamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>


/**
 * @brief  Formats and writes a string to standard output, handling
 *         the following conversion specifiers:
 *         %c  - character
 *         %s  - string
 *         %p  - pointer address
 *         %d  - decimal integer
 *         %i  - integer
 *         %u  - unsigned integer
 *         %x  - hexadecimal (lowercase)
 *         %X  - hexadecimal (uppercase)
 *         %%  - literal percent sign
 *
 * @param  str  The format string containing text and conversion specifiers.
 * @param  ...  Variadic arguments matching the conversion specifiers.
 *
 * @return The total number of characters written,
 *         or -1 if a write error occurs.
 */
int		ft_printf(const char *str, ...);

size_t	printf_ft_strlen(const char *s);
void	printf_ft_putnbr_fd(int n, int fd, int *i);
int		count_args_n(const char *s);
void	printf_ft_putstr_fd(char *s, int fd, int *i);
void	printf_ft_putchar_fd(char c, int fd, int *i);
char	*printf_ft_strchr(const char *s, int c);
int		get_perfect_len(const char *str);
void	ft_putlongnbr_fd(long int n, int fd, int *i);
char	is_format(const char *format, char c);
void	handle_type(const char *s, va_list arglist, int *i);
void	ft_puthex_fd(unsigned long int n, int fd, unsigned int upper, int *i);
char	*printf_ft_substr(char const *s, unsigned int start, size_t len);
size_t	printf_ft_strlcpy(char *dst, const char *src, size_t size);

#endif