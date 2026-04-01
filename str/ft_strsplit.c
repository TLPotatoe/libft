/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlamit <titouan.lamit@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 14:24:31 by marvin            #+#    #+#             */
/*   Updated: 2026/04/01 16:46:55 by tlamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

static int	seen_words(const char c, const char *str)
{
	static char	seen[256];

	if (str)
	{
		ft_memset(seen, 0, sizeof seen);
		while (*str)
			seen[(int)*(str++)] = 1;
	}
	return (seen[(int)c]);
}

static int	count_words_str(char const *s, const char *str)
{
	int	word;
	int	flag;

	word = 0;
	flag = 1;
	seen_words(0, str);
	while (*s)
	{
		while (*s && !seen_words(*s, NULL))
		{
			if (flag)
			{
				flag = 0;
				word++;
			}
			s++;
		}
		while (*s && seen_words(*s, NULL))
		{
			flag = 1;
			s++;
		}
	}
	return (word);
}

static char	**ft_checksplit_str(char **p, int n)
{
	int	i;

	if (!p)
		return (NULL);
	i = 0;
	while (p[i] && i != n)
		i++;
	if (i != n)
	{
		i = 0;
		while (i < n)
			free(p[i++]);
		free(p);
		return (NULL);
	}
	return (p);
}

char	**ft_strsplit(char const *s, char *str)
{
	char	**p;
	int		len;
	int		i;
	int		words;

	if (!s)
		return (NULL);
	words = count_words_str(s, str);
	p = ft_calloc(sizeof(char *), (words + 1));
	if (!p)
		return (NULL);
	i = 0;
	while (*s)
	{
		len = 0;
		while (s[len] && !seen_words(s[len], NULL))
			len++;
		if (len)
			p[i++] = ft_substr(s, 0, len);
		while (s[len] && seen_words(s[len], NULL))
			len++;
		s += len;
	}
	p = ft_checksplit_str(p, words);
	return (p);
}
