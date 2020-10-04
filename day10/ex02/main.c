/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arannara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 20:31:23 by arannara          #+#    #+#             */
/*   Updated: 2020/03/10 21:33:28 by arannara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int modul (int a)
{
	if (a < 0)
		return (-a);
	else
		return (a);
}

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

int main(void)
{
	int i;
	int array[] = {1, -3, 4, -4, 5, 6, -1};
	int *new;
	i = 0;
	
	while (i < 7)
	{
		printf("%d, ", array[i]);
		i++;
	}
	printf("\n");	
	new = ft_map(array, 7, &modul);
	printf("%d\n", new[1]);
}
