/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arannara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 23:10:46 by arannara          #+#    #+#             */
/*   Updated: 2020/03/11 23:16:24 by arannara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

typedef struct				s_list
{
	struct s_list	*next;
	void			*data;
}							t_list;

t_list						*ft_create_elem(void *data);

#endif
