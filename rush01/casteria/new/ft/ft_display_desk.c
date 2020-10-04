/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_desk.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casteria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 11:08:57 by casteria          #+#    #+#             */
/*   Updated: 2020/03/08 12:06:56 by casteria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libf.h"

void	ft_display_desk(char ***desk)
{
	int index1;
	int index2;

	index1 = 0;
	index2 = 0;
	while (index1 < SIZE_OF_DESK)
	{
		while (index2 < SIZE_OF_DESK)
		{
			ft_putchar(desk[index1][index2][0]);
			if (index2 != SIZE_OF_DESK - 1)
				ft_putchar(' ');
			index2++;
		}
		ft_putchar('\n');
		index1++;
		index2 = 0;
	}
}
