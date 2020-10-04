/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_probs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 12:32:09 by gbright           #+#    #+#             */
/*   Updated: 2020/03/08 20:11:52 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libf.h"

void	ft_fill_probs(char ***desk)
{
	int     i;
	int     j;
	int		nb;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (ft_check_cell(i, j, desk))
			{
				nb = 1;
				while (nb <= 9)
				{
					if(ft_check_rcs(i, j, nb, desk))
						desk[i][j][nb] = 1;
					nb++;
				}
			}
			j++;
		}
		i++;
	}
}
