/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlamit <titouan.lamit@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 12:11:46 by tlamit            #+#    #+#             */
/*   Updated: 2026/03/23 16:42:50 by tlamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	int		len;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	dup = malloc(len + 1);
	if (!dup)
		return (NULL);
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = 0;
	return (dup);
}

char	*ft_strndup(const char *s, size_t n)
{
	char	*dup;
	int		len;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	len = ft_min(ft_strlen(s), n);
	dup = malloc(len + 1);
	if (!dup)
		return (NULL);
	while (s[i] && n)
	{
		dup[i] = s[i];
		i++;
		n--;
	}
	dup[i] = 0;
	return (dup);
}
