/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_rcs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 10:04:49 by gbright           #+#    #+#             */
/*   Updated: 2020/03/08 21:34:04 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libf.h"

int		ft_check_rcs(int i, int j, int  nb, char ***desk)
{
	int		ii;
	int		jj;
	
	ii = 0;
	while (ii < 9)
	{
		if (desk[i][ii][0] == nb + '0')
			return (0);
		if (desk[ii][j][0] == nb + '0')
			return (0);
		ii++;
	}
	ii = (i / 3) * 3;
	while (ii >= ((i / 3) * 3)  && ii < (((i / 3) * 3) + 3))
	{
		jj = (j / 3) * 3;
		while (jj >= ((j / 3) * 3) && jj < (((j / 3) * 3) + 3))
		{
			if (nb + '0' == desk[ii][jj][0])
				return (0);
			jj++;
		}
		ii++;
	}
	return (1);
}

