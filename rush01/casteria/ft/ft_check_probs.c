/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_probs.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 12:51:01 by gbright           #+#    #+#             */
/*   Updated: 2020/03/08 18:15:37 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libf.h"

int		ft_check_probs(char ***desk)
{
	int		i;
	int		j;
	int		k;
	int		sum;

	sum = 0;
	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			k = 1;
			while (k < 10)
			{
				sum += desk[i][j][k];
				k++;
			}
			j++;
		}
		i++;
	}
	return (sum);
}
