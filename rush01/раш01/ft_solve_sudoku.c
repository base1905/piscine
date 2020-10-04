/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_sudoku.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 11:58:08 by gbright           #+#    #+#             */
/*   Updated: 2020/03/08 23:26:17 by casteria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libf.h"

int		ft_solve_sudoku(char ***desk)
{
	int		flag;
	int		flag1;

	flag = 1;
	while (flag > 0)
	{
		flag1 = flag;
		ft_fill_probs(desk);
		ft_put_ones(desk);
		flag = ft_check_probs(desk);
		if (flag1 == flag)
			return (1);
	}
	return (0);
}
