/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arannara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 23:22:23 by arannara          #+#    #+#             */
/*   Updated: 2020/03/11 23:23:59 by arannara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *new;
	t_list *kek;

	kek = ft_create_elem(data);
	if (new == NULL)
		*begin_list = kek;
	else
	{
		new = kek;
		new->next = *begin_list;
		*begin_list = new;
	}
}
