/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlamit <titouan.lamit@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 16:22:04 by tlamit            #+#    #+#             */
/*   Updated: 2026/04/01 17:19:03 by tlamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LST_H
# define FT_LST_H

# include <unistd.h>
# include <stdlib.h>

/**
 * @brief  Singly linked list node.
 *
 * @param  content  Pointer to the data held by the node.
 * @param  next     Pointer to the next node, or NULL if last.
 */
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

/**
 * @brief  Appends a node to the end of the list.
 *
 * @param  lst  Address of the pointer to the first node of the list.
 * @param  new  The node to append.
 *
 * @return void
 */
void				ft_lstadd_back(t_list **lst, t_list *new);

/**
 * @brief  Prepends a node to the beginning of the list.
 *
 * @param  lst  Address of the pointer to the first node of the list.
 * @param  new  The node to prepend.
 *
 * @return void
 */
void				ft_lstadd_front(t_list **lst, t_list *new);

/**
 * @brief  Deletes and frees all nodes of the list using del on each content,
 *         then sets the list pointer to NULL.
 *
 * @param  lst  Address of the pointer to the first node of the list.
 * @param  del  Function used to free the content of each node.
 *
 * @return void
 */
void				ft_lstclear(t_list **lst, void (*del)(void *));

/**
 * @brief  Deletes and frees a single node using del on its content.
 *         Does not free adjacent nodes.
 *
 * @param  lst  The node to delete.
 * @param  del  Function used to free the content of the node.
 *
 * @return void
 */
void				ft_lstdelone(t_list *lst, void (*del)(void *));

/**
 * @brief  Applies function f to the content of each node in the list.
 *
 * @param  lst  Pointer to the first node of the list.
 * @param  f    Function to apply to each node's content.
 *
 * @return void
 */
void				ft_lstiter(t_list *lst, void (*f)(void *));

/**
 * @brief  Returns a pointer to the last node of the list.
 *
 * @param  lst  Pointer to the first node of the list.
 *
 * @return A pointer to the last node, or NULL if the list is empty.
 */
t_list				*ft_lstlast(t_list *lst);

/**
 * @brief  Creates a new list by applying f to each node's content.
 *         On allocation failure, clears the new list using del.
 *
 * @param  lst  Pointer to the first node of the list.
 * @param  f    Function to transform each node's content.
 * @param  del  Function used to free content on failure.
 *
 * @return A pointer to the first node of the new list, or NULL on failure.
 */
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
						void (*del)(void *));

/**
 * @brief  Allocates and returns a new node with the given content.
 *         The next pointer is initialized to NULL.
 *
 * @param  content  The content to assign to the new node.
 *
 * @return A pointer to the newly created node, or NULL on failure.
 */
t_list				*ft_lstnew(void *content);

/**
 * @brief  Counts the number of nodes in the list.
 *
 * @param  lst  Pointer to the first node of the list.
 *
 * @return The number of nodes in the list.
 */
int					ft_lstsize(t_list *lst);

#endif // !FT_LST_H