/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arannara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 12:37:34 by arannara          #+#    #+#             */
/*   Updated: 2020/03/08 16:03:20 by casteria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libf.h"

int		ft_check_error(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	if (argc != NUMBER_OF_ARGUMENTS + 1)
		return (0);
	while (argv[i] != '\0')
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (!(argv[i][j] >= '1' && argv[i][j] <= '9')
				&& argv[i][j] != '.')
				return (0);
			j++;
		}
		if (j != 9)
			return (0);
		i++;
	}
	return (1);
}
