/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraylen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlamit <titouan.lamit@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 15:22:27 by tlamit            #+#    #+#             */
/*   Updated: 2026/04/01 16:42:23 by tlamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_array.h"

size_t	ft_arraylen(void **origin)
{
	size_t	len;

	len = 0;
	while (origin && origin[len])
		len++;
	return (len);
}
