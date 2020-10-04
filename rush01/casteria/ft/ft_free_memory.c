/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_memory.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casteria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 16:51:15 by casteria          #+#    #+#             */
/*   Updated: 2020/03/08 17:23:41 by casteria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libf.h"

void	ft_free_memory(char ***desk)
{
	int index1;
	int index2;

	index1 = 0;
	while (index1 < SIZE_OF_DESK)
	{
		index2 = 0;
		while (index2 < SIZE_OF_BUFFER)
		{
			free(desk[index1][index2]);
			index2++;
		}
		free(desk[index1]);
		index1++;
	}
	free(desk);
}

