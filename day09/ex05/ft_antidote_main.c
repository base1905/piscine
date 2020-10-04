/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arannara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 21:03:49 by arannara          #+#    #+#             */
/*   Updated: 2020/03/05 21:15:23 by arannara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_antidote(int i, int j, int k)
{
	if ((i > j && i < k) || (i < j && i > k))
	return (i);
	else if ((j > i && j < k) || (j < i && j > k))
	return (j);
	else
	return (k);
}

int main()
{
	int a;
	int b;
	int c;
	
	a = 334;
	b = 505;
	c = -143;
	printf("%d\n", ft_antidote(a, b, c));

	return(0);
}
