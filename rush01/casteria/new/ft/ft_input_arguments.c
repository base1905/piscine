/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input_arguments.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arannara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 11:22:47 by arannara          #+#    #+#             */
/*   Updated: 2020/03/08 16:32:00 by casteria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libf.h"

char	***ft_input_arguments(int argc, char **argv, char ***desk)
{
	int i;
	int j;
	int ii;

	ii = 0;
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (j < SIZE_OF_DESK)
		{
			desk[ii][j][0] = argv[i][j];
			j++;
		}
		ii++;
		i++;
	}
	return (desk);
}
