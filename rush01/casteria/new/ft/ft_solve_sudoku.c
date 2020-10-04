/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_sudoku.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 11:58:08 by gbright           #+#    #+#             */
/*   Updated: 2020/03/08 19:04:28 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libf.h"

int		ft_solve_sudoku(char ***desk)
{
	int		flag;
	
	flag = 1;
	while (flag > 0)
	{
		ft_null_all(desk);
		ft_fill_probs(desk);
		ft_put_ones(desk);
		flag = ft_check_probs(desk);
		ft_display_desk(desk);
		ft_putchar('\n');
	}
	return (0);
}
