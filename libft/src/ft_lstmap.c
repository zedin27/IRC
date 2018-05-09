/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 00:56:28 by ztisnes           #+#    #+#             */
/*   Updated: 2017/10/09 18:46:52 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Iterates the linked list and applies the function f to create a "new" list
** Linked list is a data structure that passes a data and a pointer to the new
** node.
** It returns the new list with malloc. If allocation fails, the function
** NULL.
*/

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *head;

	if (lst)
	{
		head = f(lst);
		head->next = ft_lstmap(lst->next, f);
		return (head);
	}
	return (NULL);
}
