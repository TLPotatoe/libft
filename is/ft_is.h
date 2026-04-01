/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlamit <titouan.lamit@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 16:32:08 by tlamit            #+#    #+#             */
/*   Updated: 2026/04/01 17:18:12 by tlamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_IS_H
# define FT_IS_H

/**
 * @brief  Checks whether c is an alphabetic character (a-z, A-Z).
 *
 * @param  c  The character to check.
 *
 * @return Non-zero if c is alphabetic, zero otherwise.
 */
int	ft_isalpha(int c);

/**
 * @brief  Checks whether c is an alphanumeric character (a-z, A-Z, 0-9).
 *
 * @param  c  The character to check.
 *
 * @return Non-zero if c is alphanumeric, zero otherwise.
 */
int	ft_isalnum(int c);

/**
 * @brief  Checks whether c is a valid ASCII character (0-127).
 *
 * @param  c  The character to check.
 *
 * @return Non-zero if c is a valid ASCII character, zero otherwise.
 */
int	ft_isascii(int c);

/**
 * @brief  Checks whether c is a decimal digit (0-9).
 *
 * @param  c  The character to check.
 *
 * @return Non-zero if c is a digit, zero otherwise.
 */
int	ft_isdigit(int c);

/**
 * @brief  Checks whether c is a printable character (0x20-0x7e).
 *
 * @param  c  The character to check.
 *
 * @return Non-zero if c is printable, zero otherwise.
 */
int	ft_isprint(int c);

/**
 * @brief  Checks whether c is a whitespace character
 *         (space, \t, \n, \r, \f, \v).
 *
 * @param  c  The character to check.
 *
 * @return Non-zero if c is a whitespace character, zero otherwise.
 */
int	ft_isspace(int c);

#endif // !FT_IS_H