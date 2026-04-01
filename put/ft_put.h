/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlamit <titouan.lamit@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 16:11:14 by tlamit            #+#    #+#             */
/*   Updated: 2026/04/01 16:12:29 by tlamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUT_H
# define FT_PUT_H

/**
 * @brief  Writes a single character to the given file descriptor.
 *
 * @param  c   The character to write.
 * @param  fd  The file descriptor to write to.
 *
 * @return void
 */
void	ft_putchar_fd(char c, int fd);

/**
 * @brief  Writes a string followed by a newline to the given file descriptor.
 *
 * @param  s   The string to write.
 * @param  fd  The file descriptor to write to.
 *
 * @return void
 */
void	ft_putendl_fd(char *s, int fd);

/**
 * @brief  Writes an integer as a string to the given file descriptor.
 *
 * @param  n   The integer to write.
 * @param  fd  The file descriptor to write to.
 *
 * @return void
 */
void	ft_putnbr_fd(int n, int fd);

/**
 * @brief  Writes a string to the given file descriptor.
 *
 * @param  s   The string to write.
 * @param  fd  The file descriptor to write to.
 *
 * @return void
 */
void	ft_putstr_fd(char *s, int fd);

#endif // !FT_PUT_H