/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reader.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlamit <titouan.lamit@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 14:43:35 by tlamit            #+#    #+#             */
/*   Updated: 2026/04/01 16:55:12 by tlamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef READER_H
# define READER_H

# include "get_next_line.h"
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

# ifndef RAW_BUFFER_SIZE
#  define RAW_BUFFER_SIZE 1024
# endif

/**
 * @brief  Reads the entire content of a file into a newly allocated string.
 *
 * @param  filename  Path to the file to read.
 *
 * @return A newly allocated string containing the raw file content,
 *         or NULL if the file cannot be opened or an allocation fails.
 */
char	*ft_get_raw_file(char *filename);

#endif