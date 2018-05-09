/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/08 23:51:44 by ztisnes           #+#    #+#             */
/*   Updated: 2017/10/09 03:44:02 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Delets one node from the linked list
*/

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	t_list *node;

	node = *alst;
	del((node->content), (node->content_size));
	ft_memdel((void **)alst);
}
