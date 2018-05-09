/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expression_tree.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 20:54:52 by ztisnes           #+#    #+#             */
/*   Updated: 2018/01/10 23:25:02 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_btree		*create_node(int *value)
{
	t_btree *root;

	root = (t_btree *)ft_memalloc(sizeof(t_btree));
	root->data = value;
	root->left = NULL;
	root->right = NULL;
	return (root);
}

t_btree		*insert_left(t_btree *node, int *value)
{
	node->left = create_node(value);
	return (node->left);
}

t_btree		*insert_right(t_btree *node, int *value)
{
	node->right = create_node(value);
	return (node->right);
}
