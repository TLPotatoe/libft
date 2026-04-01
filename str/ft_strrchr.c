/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlamit <titouan.lamit@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:09:39 by tlamit            #+#    #+#             */
/*   Updated: 2026/04/01 16:46:48 by tlamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last_p;

	if (!s)
		return (NULL);
	last_p = NULL;
	while (*s)
	{
		if (*s == (unsigned char)(c))
			last_p = (char *)s;
		s++;
	}
	if (*s == (unsigned char)(c))
		last_p = (char *)s;
	return (last_p);
}
