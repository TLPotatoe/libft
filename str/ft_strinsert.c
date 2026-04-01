/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strinsert.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlamit <titouan.lamit@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 15:37:17 by tlamit            #+#    #+#             */
/*   Updated: 2026/04/01 15:57:45 by tlamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strinsert(char *str, char *to_insert, size_t pos)
{
	char	*ret;
	size_t	len_str;
	size_t	len_insert;

	if (!str && !to_insert)
		return (NULL);
	if (!to_insert)
		return (str);
	if (!str)
		return (to_insert);
	len_str = ft_strlen(str);
	len_insert = ft_strlen(to_insert);
	ret = malloc(sizeof(char) * (len_str + len_insert + 1));
	if (!ret)
		return (NULL);
	pos = ft_min(len_str, pos);
	ft_memcpy(ret, str, pos);
	ft_memcpy(ret + pos, to_insert, len_insert + 1);
	ft_memcpy(ret + pos + len_insert, str + pos, len_str - pos + 1);
	return (ret);
}


char	*ft_strninsert(char *str, char *to_insert, size_t pos, size_t n)
{
	char	*ret;
	size_t	len_str;

	if (!str && !to_insert)
		return (NULL);
	if (!to_insert)
		return (str);
	if (!str)
		return (to_insert);
	len_str = ft_strlen(str);
	pos = ft_min(len_str, pos);
	n = ft_min(ft_strlen(to_insert), n);
	ret = malloc(sizeof(char) * (len_str + n + 1));
	if (!ret)
		return (NULL);
	ft_memcpy(ret, str, pos);
	ft_memcpy(ret + pos, to_insert, n);
	ft_memcpy(ret + pos + n, str + pos, len_str - pos + 1);
	return (ret);
}

char	*ft_strlinsert(char *str, char *to_insert, size_t pos, size_t len)
{
	char	*ret;
	size_t	len_str;
	size_t	len_ins;

	if (!str && !to_insert)
		return (NULL);
	if (!to_insert)
		return (str);
	if (!str)
		return (to_insert);
	len_str = ft_strlen(str);
	len_ins = ft_strlen(to_insert);
	pos = ft_min(pos, len_str);
	len = ft_min(len_str + len_ins, len);
	ret = malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (NULL);
	ft_memcpy(ret, str, ft_min(len, pos));
	if (len > pos)
		ft_memcpy(ret + pos, to_insert, ft_min(len - pos, len_ins));
	if (len > pos + len_ins)
		ft_memcpy(ret + pos + len_ins, str + pos, len - pos - len_ins);
	ret[len] = 0;
	return (ret);
}
