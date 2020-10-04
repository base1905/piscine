/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arannara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 13:15:19 by arannara          #+#    #+#             */
/*   Updated: 2020/03/11 23:19:05 by arannara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *kek;
	t_list *iter;

	iter = *begin_list;
	kek = ft_create_elem(data);
	if (kek != 0)
	{
		while (iter->next)
			iter = iter->next;
		iter->next = kek;
	}
	else
		*begin_list = kek;
}
