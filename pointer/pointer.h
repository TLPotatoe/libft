/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointer.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlamit <titouan.lamit@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 15:51:36 by tlamit            #+#    #+#             */
/*   Updated: 2026/04/01 17:19:22 by tlamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINTER_H
# define POINTER_H

# include <stdlib.h>

/**
 * @brief  Frees the pointer referenced by origin and replaces it with new.
 * @param  origin  Address of the pointer to free and reassign.
 * @param  new     New pointer to assign to *origin.
 * @return void
 */
void	ft_swap_free(void **origin, void *new);

#endif // !POINTER_H