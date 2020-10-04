/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arannara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/13 21:52:39 by arannara          #+#    #+#             */
/*   Updated: 2020/03/13 21:59:15 by arannara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

t_btree		*btree_create_node(void *item)
{
	t_btree *base;

	base = malloc(sizeof(*base));
	if (base == NULL)
		return (0);
	base->left = NULL;
	base->right = NULL;
	base->item = item;
	return (base);
}
