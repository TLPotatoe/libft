/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strfajoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlamit <titouan.lamit@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 15:53:08 by tlamit            #+#    #+#             */
/*   Updated: 2026/04/22 16:10:29 by tlamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

char	*ft_strfajoin(char *s1, char *s2)
{
	char	*ret;
	size_t	len_1;
	size_t	len_2;

	if (!s1 && s2)
		return (s2);
	else if (!s2 && s1)
		return (s1);
	else if (!s1 && !s2)
		return (NULL);
	len_1 = ft_strchr(s1, 0) - s1;
	len_2 = ft_strchr(s2, 0) - s2;
	ret = malloc(sizeof(char) * (len_1 + len_2 + 1));
	if (!ret)
		return (NULL);
	ft_memcpy(ret, s1, len_1);
	ft_memcpy(ret + len_1, s2, len_2);
	ret[len_1 + len_2] = 0;
	free(s1);
	free(s2);
	return (ret);
}
