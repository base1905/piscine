/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input_arguments.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arannara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 11:22:47 by arannara          #+#    #+#             */
/*   Updated: 2020/03/08 13:49:30 by arannara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libf.h"

char	***ft_input_arguments(int argc, char **argv, char ***desk)
{
	int i;
	int j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (j < SIZE_OF_DESK)
		{
			desk[i][j][0] = argv[i][j];
			j++;
		}
		j = 0;
		i++;
	}
	return (desk);
}
