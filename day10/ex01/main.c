/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arannara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 17:35:00 by arannara          #+#    #+#             */
/*   Updated: 2020/03/11 16:34:25 by arannara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	putnbr(int c)
{
	printf("%d\n", c);
}

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int i;

	i = 0;
	while (i < length)
		f(tab[i++]);
}

int		main(void)
{
	int	test2[4] = { -25, 0, 20, 45 };
 	ft_foreach(test2, 5, putnbr);
}
