/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arannara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 23:35:08 by arannara          #+#    #+#             */
/*   Updated: 2020/03/11 23:40:18 by arannara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list	*lol;

	lol = begin_list;
	if (lol)
	{
		while (lol->next)
			lol = lol->next;
		return (lol);
	}
	return (NULL);
}
