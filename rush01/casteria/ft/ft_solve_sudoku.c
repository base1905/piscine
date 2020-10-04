/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_sudoku.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 11:58:08 by gbright           #+#    #+#             */
/*   Updated: 2020/03/08 21:34:14 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libf.h"

int		ft_solve_sudoku(char ***desk)
{
	int		flag;

	flag = 1;
	while (flag > 0)
	{

		ft_fill_probs(desk);
		ft_put_ones(desk);
		ft_display_desk(desk);
		ft_putchar('\n');
		flag = ft_check_probs(desk);
	}
	ft_putchar('\n');
	return (0);
}
