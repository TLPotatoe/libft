/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlamit <titouan.lamit@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 20:52:24 by tlamit            #+#    #+#             */
/*   Updated: 2026/04/01 16:08:47 by tlamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

# ifndef GNL_BUFFER_SIZE
#  define GNL_BUFFER_SIZE 1024
# endif

char	*get_next_line(int fd);
char	*gnl_ft_strchr(char *s, char c);
char	*gnl_ft_strndup(char *s, size_t n);
char	*gnl_ft_strjoin(char *s1, char *s2);

char	*extract_line(char **mbuff);

#endif