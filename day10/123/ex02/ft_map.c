/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arannara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 20:31:23 by arannara          #+#    #+#             */
/*   Updated: 2020/03/10 21:34:13 by arannara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *arara;

	i = 0;
	arara = (int *)malloc(sizeof(int) * length);
	if (arara == NULL)
		return (0);
	while (i < length)
	{
		arara[i] = f(tab[i]);
		i++;
	}
	return (arara);
}
