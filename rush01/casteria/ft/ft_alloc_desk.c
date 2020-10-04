/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alloc_desk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casteria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 10:51:04 by casteria          #+#    #+#             */
/*   Updated: 2020/03/08 17:23:45 by casteria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libf.h"

char	***ft_alloc_desk(void)
{
	char	***desk;
	int		index1;
	int		index2;

	index1 = 0;
	index2 = 0;
	if (!(desk = (char ***)malloc(sizeof(char**) * SIZE_OF_DESK)))
		return (0);
	while (index1 < SIZE_OF_DESK)
	{
		if (!(desk[index1] = (char **)malloc(sizeof(char*) * SIZE_OF_DESK)))
			return (0);
		while (index2 < SIZE_OF_BUFFER)
		{
			if (!(desk[index1][index2] = (char *)malloc(sizeof(char)
													* SIZE_OF_BUFFER)))
				return (0);
			index2++;
		}
		index2 = 0;
		index1++;
	}
	return (desk);
}
