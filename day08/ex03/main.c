/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arannara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 18:29:55 by arannara          #+#    #+#             */
/*   Updated: 2020/03/09 19:49:35 by arannara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_abs.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
	
int		main(int argc, char *argv[])
{
	int count;
	if ( argc == 2 )
	{
		count = atoi(argv[1]);

		printf("%d\n", count);

		count = ABS(count);

		printf("%d\n", count);

	}	
	return (0);
}
