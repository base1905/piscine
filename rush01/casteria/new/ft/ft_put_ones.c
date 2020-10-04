/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_ones.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 13:16:38 by gbright           #+#    #+#             */
/*   Updated: 2020/03/08 18:50:06 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libf.h"

void	ft_put_ones(char ***desk)
{
	int		i;
	int		j;
	int		nb;
	
	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (ft_sum(i, j, desk) == 1)
			{
				nb = ft_putin_num(i, j, desk);
				desk[i][j][0] = nb + '0';
				ft_null(i, j, nb, desk);
			}
			j++;
		}
		i++;
	}
}
