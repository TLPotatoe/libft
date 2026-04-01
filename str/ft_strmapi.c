/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlamit <titouan.lamit@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 16:49:52 by tlamit            #+#    #+#             */
/*   Updated: 2026/04/01 16:46:43 by tlamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*p;
	int		i;

	if (!s || !f)
		return (NULL);
	p = ft_strdup(s);
	if (!p)
		return (NULL);
	i = -1;
	while (s[++i])
		p[i] = f(i, s[i]);
	return (p);
}
