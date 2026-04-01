/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlamit <titouan.lamit@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 13:12:26 by tlamit            #+#    #+#             */
/*   Updated: 2026/04/01 16:46:46 by tlamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	if (!big || !little)
		return (NULL);
	if (*little == 0)
		return ((char *)big);
	while (*big && len--)
	{
		i = 0;
		while (big[i] == little[i] && i <= len)
			if (little[++i] == 0)
				return ((char *)big);
		big++;
	}
	return (NULL);
}
