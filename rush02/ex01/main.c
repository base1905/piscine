/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arannara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 21:44:13 by arannara          #+#    #+#             */
/*   Updated: 2020/03/14 22:09:33 by arannara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>

void ft_putnbr(int nb);

void  xy_counter(int *x, int *y)
{
	char bufer;

	while ( read(0, &bufer, 1) != '\0' ) 
	{	
		if	( bufer != '\n' )
			*x = *x + 1;
		else
			*y = *y + 1;
	}
	*x = *x / *y;
}
	
int	main ()
{
	int x = 0;
	int y = 0;
	xy_counter(&x, &y);

	ft_putnbr(x);
	ft_putnbr(y);
}


