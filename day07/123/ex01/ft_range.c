/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arannara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 14:31:48 by arannara          #+#    #+#             */
/*   Updated: 2020/03/05 23:41:52 by arannara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max)
{
	int plus;
	int number_int;
	int i;
	int *array;

	i = 0;
	plus = max - min;
	if (plus < 0)
		plus = plus * -1;
	array = (int *)malloc(sizeof(min) * plus);
	while (i < plus)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}
