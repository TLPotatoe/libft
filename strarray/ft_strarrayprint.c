/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strarrayprint.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlamit <titouan.lamit@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 15:25:08 by tlamit            #+#    #+#             */
/*   Updated: 2026/07/28 15:30:49 by tlamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf/ft_printf.h"
#include "../str/ft_str.h"

void	ft_strarrayprint(char **array)
{
	int	i;

	if (!array)
		return ;
	i = -1;
	while (array[++i])
	{
		if (!ft_strlen(array[i]))
			ft_printf("Empty > %p\n", array[i]);
		else
			ft_printf("%s\n", array[i]);
	}
}
