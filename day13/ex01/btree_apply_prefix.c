/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arannara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/13 22:05:46 by arannara          #+#    #+#             */
/*   Updated: 2020/03/13 22:41:49 by arannara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

void	btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	if (root->item == NULL)
		return (0);
	applyf(root->item);
	if (root->left != NULL)
		btree_apply_prefix(root->left, applyf);
	if (root->right != NULL)
		btree_apply_prefix(root->right, applyf);
}
