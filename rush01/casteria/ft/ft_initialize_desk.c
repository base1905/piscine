/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize_desk.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casteria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 11:02:42 by casteria          #+#    #+#             */
/*   Updated: 2020/03/08 16:22:53 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libf.h"

char	***ft_alloc_desk(void);

char	***ft_initialize_desk(void)
{
	char	***desk;
	int		index1;
	int		index2;
	int		index3;

	desk = ft_alloc_desk();
	index1 = 0;
	index2 = 0;
	index3 = 0;
	while (index1 < SIZE_OF_DESK)
	{
		while (index2 < SIZE_OF_DESK)
		{
			while (index3 < SIZE_OF_BUFFER)
				desk[index1][index2][index3++] = 0;
			index2++;
			index3 = 0;
		}
		index1++;
		index2 = 0;
		index3 = 0;
	}
	return (desk);
}
