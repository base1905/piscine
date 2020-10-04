/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casteria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 11:04:51 by casteria          #+#    #+#             */
/*   Updated: 2020/03/08 20:54:34 by gbright          ###   ########.fr       */
/*   Updated: 2020/03/08 18:28:49 by casteria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libf.h"

int		main(int argc, char **argv)
{
	char ***desk;

	desk = ft_initialize_desk();
	
	if (desk != 0 && ft_check_error(argc, argv))
	{
		ft_input_arguments(argc, argv, desk);
		ft_solve_sudoku(desk);
		ft_display_desk(desk);
		ft_free_memory(desk);
	}
	else ft_error_report();
	return (0);
}
