/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strarraystr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlamit <titouan.lamit@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 16:41:11 by tlamit            #+#    #+#             */
/*   Updated: 2026/04/22 17:01:14 by tlamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strarray.h"

char	*ft_strarraystr(char **strarray, char *str)
{
	char	*ret;
	size_t	i;

	i = 0;
	while (strarray && str && strarray[i])
	{
		ret = ft_strnstr(strarray[i], str, ft_strlen(strarray[i]));
		if (ret)
			return (ret);
		i++;
	}
	return (NULL);
}
