/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   12345.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arannara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 21:50:14 by arannara          #+#    #+#             */
/*   Updated: 2020/02/28 22:17:40 by arannara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void ft_ft(int *nbr)
{
	*nbr = 42;
}

int main(void)
{
	int a = 123;
	int *nbr;
	nbr = &a;
	ft_ft(nbr);
	printf("%d", a); 
	return(0);
}
