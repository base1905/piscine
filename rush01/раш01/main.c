/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 22:01:11 by gbright           #+#    #+#             */
/*   Updated: 2020/03/08 23:26:30 by casteria         ###   ########.fr       */
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
		if (ft_solve_sudoku(desk) == 1)
		{
			ft_error_report();
			return (0);
		}
		ft_display_desk(desk);
		ft_free_memory(desk);
	}
	else
		ft_error_report();
	return (0);
}
