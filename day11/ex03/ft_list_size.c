/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arannara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 23:26:52 by arannara          #+#    #+#             */
/*   Updated: 2020/03/11 23:29:00 by arannara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	t_list	*kek;
	int		i;

	i = 0;
	kek = begin_list;
	while (kek != 0)
	{
		i++;
		kek = kek->next;
	}
	return (i);
}
