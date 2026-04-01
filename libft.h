/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlamit <titouan.lamit@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 12:09:55 by tlamit            #+#    #+#             */
/*   Updated: 2026/04/01 13:57:34 by tlamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include "ft_printf/ft_printf.h"
# include "get_next_line/get_next_line.h"
# include "reader/reader.h"
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
int					ft_isspace(int c);

void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstadd_front(t_list **lst, t_list *new);
void				ft_lstclear(t_list **lst, void (*del)(void *));
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstiter(t_list *lst, void (*f)(void *));
t_list				*ft_lstlast(t_list *lst);
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
						void (*del)(void *));
t_list				*ft_lstnew(void *content);
int					ft_lstsize(t_list *lst);

void				ft_bzero(void *s, size_t n);
void				*ft_calloc(size_t nmemb, size_t size);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_memmove(void *dest, const void *src, size_t n);
void				*ft_memset(void *s, int c, size_t n);

void				ft_putchar_fd(char c, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
void				ft_putstr_fd(char *s, int fd);

int					ft_atoi(const char *nptr);
int					get_size_m(int nb);
char				*ft_itoa(int n);
int					count_words(char const *s, char c);
char				**ft_checksplit(char **p, int n);
char				**ft_split(char const *s, char c);
char				*ft_strchr(const char *s, int c);
char				*ft_strdup(const char *s);
char				*ft_strndup(const char *s, size_t n);
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strjoin(char const *s1, char const *s2);
unsigned int		get_result(char *dst, char *src, size_t size);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
size_t				ft_strlcpy(char *dst, const char *src, size_t size);
size_t				ft_strlen(const char *s);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_strnstr(const char *big, const char *little,
						size_t len);
char				*ft_strrchr(const char *s, int c);
char				*ft_strtrim(char const *s1, char const *set);
char				*ft_substr(char const *s, unsigned int start, size_t len);
int					ft_tolower(int c);
int					ft_toupper(int c);

size_t				ft_strsspace(char **str);
char				**ft_strsplit(char const *s, char *str);
char				*ft_strinsert(char *str, char *to_insert, size_t pos);
char				*ft_strninsert(char *str, char *to_insert, size_t pos,
						size_t n);
char				*ft_strlinsert(char *str, char *to_insert, size_t pos,
						size_t len);
char				*ft_strinsert(char *str, char *to_insert, size_t pos);
char				*ft_strninsert(char *str, char *to_insert, size_t pos,
						size_t n);
char				**ft_listninsert(char **origin, size_t insert_p, char *str,
						size_t n);
char				*ft_strlinsert(char *str, char *to_insert, size_t pos,
						size_t len);

void				ft_remchr(char *s, char *char_list);
void				ft_strreplace(char *source, char *to_replace,
						char replace_by);

size_t				ft_listlen(char **origin);
char				**ft_listinsert(char **origin, size_t insert_p, char *str);
char				**ft_listninsert(char **origin, size_t insert_p, char *str,
						size_t n);

size_t				ft_min(size_t a, size_t b);

#endif
