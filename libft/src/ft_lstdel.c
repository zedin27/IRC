/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 00:48:53 by ztisnes           #+#    #+#             */
/*   Updated: 2017/10/09 03:43:18 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Delets node in the iteration of the linked list
*/

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *node;

	while (*alst)
	{
		node = (*alst)->next;
		ft_lstdelone(alst, del);
		*alst = node;
	}
}
