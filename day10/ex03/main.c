/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arannara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 21:37:48 by arannara          #+#    #+#             */
/*   Updated: 2020/03/11 15:06:02 by arannara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_strlen (char *a)
{
	int i;

	i = 0;
	while (a[i] != '\0')
	{
		i++;
	}
	return (i);
}

int		ft_any(char **tab, int (*f)(char*))
{
	int i;

	i = 0;
	while (tab[i] != '\0')
	{
		if (f(tab[i]) == 1)
			return (1);
		i++;
	}
	return (0);
}

int main(void)
{
	int i;
	char *arr []= {"leng45", "leng", "leng", 0};

	printf("%d", ft_any(arr, &ft_strlen));
	
}

